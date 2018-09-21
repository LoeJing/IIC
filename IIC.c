#include<string.h>
#include<reg52.h>
#include<intrins.h>
#define DELAY_TIME 60 /*经实验，不要小于50！否则可能造成时序混乱*/
#define TRUE 1
#define FALSE 0

sbit SCL=P1^7;/*假设由P1.7和P1.6控制*/
sbit SDA=P1^6;

/********** Function Definition　函数定义 ************/
void DELAY(unsigned int t) /*延时函数*/
{
    while(t!=0)
        t--;
}
void I2C_Start(void)
{
    /*启动I2C总线的函数，当SCL为高电平时使SDA产生一个负跳变*/
    SDA=1;
    SCL=1;
    DELAY(DELAY_TIME);
    SDA=0;
    DELAY(DELAY_TIME);
    SCL=0;
    DELAY(DELAY_TIME);
}
void I2C_Stop(void)
{
    /*终止I2C总线，当SCL为高电平时使SDA产生一个正跳变*/
    SDA=0;
    SCL=1;
    DELAY(DELAY_TIME);
    SDA=1;
    DELAY(DELAY_TIME);
    SCL=0;
    DELAY(DELAY_TIME);
}

void SEND_0(void)   /* SEND ACK */
{
    /*发送0，在SCL为高电平时使SDA信号为低*/
    SDA=0;
    SCL=1;
    DELAY(DELAY_TIME);
    SCL=0;
    DELAY(DELAY_TIME);
}

void SEND_1(void)
{
    /*发送1，在SCL为高电平时使SDA信号为高*/
    SDA=1;
    SCL=1;
    DELAY(DELAY_TIME);
    SCL=0;
    DELAY(DELAY_TIME);
}

bit Check_Acknowledge(void)
{
    /*发送完一个字节后检验设备的应答信号*/
    SDA=1;
    SCL=1;
    DELAY(DELAY_TIME/2);
    F0=SDA;
    DELAY(DELAY_TIME/2);
    SCL=0;
    DELAY(DELAY_TIME);
    if(F0==1)
        return FALSE;
    return TRUE;
}
void WriteI2CByte(char b)reentrant
{
    /*向I2C总线写一个字节*/
    char i;
    for(i=0;i<8;i++)
        if((b<<i)&0x80)
            SEND_1();
        else
            SEND_0();
}
char ReadI2CByte(void)reentrant
{
    /*从I2C总线读一个字节*/
    char b=0,i;
    for(i=0;i<8;i++)
    {
        SDA=1;    /*释放总线*/
        SCL=1;    /*接受数据*/
        DELAY(10);
        F0=SDA;
        DELAY(10);
        SCL=0;
        if(F0==1)
            {
                b=b<<1;
                b=b|0x01;
            }
        else
            b=b<<1;
    }
    return b;
}
/**********以下为读写24c02的函数**********/
void Write_One_Byte(char addr,char thedata)
{
          bit acktemp=1;
          /*write a byte to mem*/
          I2C_Start();
          WriteI2CByte(0xa0);
          acktemp=Check_Acknowledge();
          WriteI2CByte(addr);/*address*/
          acktemp=Check_Acknowledge();
          WriteI2CByte(thedata);/*thedata*/
          acktemp=Check_Acknowledge();
          I2C_Stop();
}

void Write_A_Page(char *buffer,char addr)
{
          bit acktemp=1;
          bit wrtmp;
          int i;
          /*write a page to at24c02*/
          I2C_Start();
          WriteI2CByte(0xa0);
          acktemp=Check_Acknowledge();
          WriteI2CByte(addr);/*address*/
          acktemp=Check_Acknowledge();
          for(i=0;i<7;i++)
          {
            WriteI2CByte(buffer[i]);
            if(!Check_Acknowledge())
                {
                    I2C_Stop();
                }
           }
          I2C_Stop();
}

char Read_One_Byte(char addr)
{         bit acktemp=1;
          char mydata;
           /*read a byte from mem*/
          I2C_Start();
          WriteI2CByte(0xa0);
          acktemp=Check_Acknowledge();
          WriteI2CByte(addr);/*address*/
          acktemp=Check_Acknowledge();
          I2C_Start();
          WriteI2CByte(0xa1);
          acktemp=Check_Acknowledge();
          mydata=ReadI2CByte();
          acktemp=Check_Acknowledge();
          return mydata;
          I2C_Stop();
}

void Read_N_Bytes(char *buffer,char n,char addr)
{
          bit acktemp=1;
          int i=0;
           /*read 8 bytes from mem*/
          I2C_Start();
          WriteI2CByte(0xa0);
          acktemp=Check_Acknowledge();
          WriteI2CByte(addr);/*address*/
          acktemp=Check_Acknowledge();
          I2C_Start();
          WriteI2CByte(0xa1);
          acktemp=Check_Acknowledge();
          for(i=0;i<n;i++)
          {
                buffer[i]=ReadI2CByte();
                if(i!=n-1)
                    SEND_0();    /*发送应答*/
                else
                    SEND_1();    /*发送非应答*/
          }
   I2C_Stop();

}


void main()
{
          int i;
          char mybyte;
          char myarray[8];
          char myarray2[8];
          char rdarray[16];     
          for(i=0;i<8;i++)
          {
                myarray[i]=i;
                myarray2[i]=i+0x08;    

          }

          Write_One_Byte(0x20,0x28);
          Write_A_Page(myarray,0x10);
          Write_A_Page(myarray2,0x18);
          mybyte=Read_One_Byte(0x20);
          Read_N_Bytes(rdarray,16,0x10);

}
