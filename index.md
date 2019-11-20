---
layout:post
title:全网最全的开源协议选择指南
date:2019-11-19  
cover:![](https://timgsa.baidu.com/timg?image&quality=80&size=b9999_10000&sec=1574167249100&di=bf9277c7be832e42400b551ffa4b6062&imgtype=jpg&src=http%3A%2F%2Fimg3.imgtn.bdimg.com%2Fit%2Fu%3D3509476663%2C1255456178%26fm%3D214%26gp%3D0.jpg)
categories:Open-source license
tags:Open-source license
---
<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8" />
		
	</head>
	<body>
		<div>
			<h2>Open-source license</h2>
			<p>开源许可证是对商业应用友好的许可。使用者也可以在需要的时候修改代码来满足需要并作为开源或商业产品发布/销售。
			开源许可证是一种具有法律性质的合同，目的在于规范受著作权保护的软件的使用或者分发行为。由于中华人民共和国第十届全国人民。代表大会常务委员会第二十五次会议决定：
			加入世界知识产权组织于1996年12月20日在瑞士日内瓦召开的关于版权和邻接权若干问题的外交会议上通过的《世界知识产权组织版权条约》。
			同时声明：在中华人民共和国政府另行通知前，《世界知识产权组织版权条约》不适用于中华人民共和国香港特别行政区和澳门特别行政区。因此开源许可证在我国拥有了真正的法律效力，
			大家在使用GitHub时会看到各种各样的开源license，但是具体要给自己的开源项目赋予哪种许可证呢？话不多说，上图：</p>
			<img alt="guowaidalaoliucengtu" src="https://www.linuxprobe.com/wp-content/uploads/2017/02/how-choice-license02.png" >
			<p>这位大神为我们提供了很全面的选择指南，但他是英文的，而且你有可能还会感到困惑，因此GitHub专门为你准备了一个指导网站：<a href="https://choosealicense.com/">choosealicense.com</a>
			GitHub希望你在选择证书感到困惑时这个网站能给你提供必要帮助，同时他也为你提供了所有证书的原件方便你复制下载。</p>
			<p>但是这些还不够，这个站点的描述也是英文的，也许你看不懂，因此有必要重新总结一下（最全面的总结在<a href="https://opensource.org/licenses/">opensource.org/licenses</a>这个网站中，当然，他也是英文的！）</p>
		</div>
		<div class="ruanjian">
			<div>
				<p>常见的开源软件许可证有：
					<ul>
						<li>GNU LGPL v3.0</li>
						<li>Mozilla Public License 2.0</li>
						<li>GNU GPL v3.0</li>
						<li>BSD (3-Clause) License</li>
						<li>MIT License</li>
						<li>Apache License 2.0</li>
					</ul>
				</p>
			</div>
			<div>
				<h3><a href="https://choosealicense.com/licenses/lgpl-3.0/">GNU LGPL v3.0</a></h3>
				<p>此最强大的许可的许可条件是提供许可作品和修改的完整源代码，其中包括在同一许可下使用许可作品的较大作品。
				版权和许可声明必须保留。贡献者明确授予专利权。使用修改后的版本通过网络提供服务时，必须提供修改后的完整源代码。
				简而言之，如果你分发自由软件的副本，那么副本中必须包含许可协议和版权声明，并确保接收者能够获取到该副本的源代码及其依赖库的源码。</p>
			</div>
			<div>
				<h3><a href="https://choosealicense.com/licenses/mpl-2.0/">Mozilla Public License 2.0</a></h3>
				<p>MPL是The Mozilla Public License的简写，是1998年初Netscape的 Mozilla小组为其开源软件项目设计的软件许可证。MPL许可证出现的最重要原因就是，
				Netscape公司认为GPL许可证没有很好地平衡开发者对 源代码的需求和他们利用源代码获得的利益。同著名的GPL许可证和BSD许可证相比，
				MPL在许多权利与义务的约定方面与它们相同（因为都是符合OSIA 认定的开源软件许可证）。但是，相比而言MPL还有以下几个显著的不同之处:<br>
				<ul>
					<li>MPL虽然要求对于经MPL许可证发布的源代码的修改也要以MPL许可证的方式再许可出来，以保证其他人可以在MPL的条款下共享源代码。但是，
					在MPL 许可证中对“发布”的定义是“以源代码方式发布的文件”，这就意味着MPL允许一个企业在自己已有的源代码库上加一个接口，
					除了接口程序的源代码以MPL 许可证的形式对外许可外，源代码库中的源代码就可以不用MPL许可证的方式强制对外许可。这些，
					就为借鉴别人的源代码用做自己商业软件开发的行为留了一个豁口。</li>
					<li>MPL许可证第三条第7款中允许被许可人将经过MPL许可证获得的源代码同自己其他类型的代码混合得到自己的软件程序。</li>
					<li>对软件专利的态度，MPL许可证不像GPL许可证那样明确表示反对软件专利，但是却明确要求源代码的提供者不能提供已经受专利保护的源代码
					（除非他本人是 专利权人，并书面向公众免费许可这些源代码），
					也不能在将这些源代码以开放源代码许可证形式许可后再去申请与这些源代码有关的专利。</li>
					<li>对源代码的定义 而在MPL（1.1版本）许可证中，对源代码的定义是:“源代码指的是对作品进行修改最优先择 取的形式，它包括:所有模块的所有源程序，
					加上有关的接口的定义，加上控制可执行作品的安装和编译的‘原本’（原文为‘Script’），
					或者不是与初始源代码显著不同的源代码就是被源代码贡献者选择的从公共领域可以得到的程序代码。”</li>
					<li>MPL许可证第3.5条款：<br>
					<div>
						3.5. Application of Additional Terms
						You may choose to offer, and to charge a fee for, warranty, support,
						indemnity or liability obligations to one or more recipients of Covered
						Software. However, You may do so only on Your own behalf, and not on
						behalf of any Contributor. You must make it absolutely clear that any
						such warranty, support, indemnity, or liability obligation is offered by
						You alone, and You hereby agree to indemnify every Contributor for any
						liability incurred by such Contributor as a result of warranty, support,
						indemnity or liability terms You offer. You may include additional
						disclaimers of warranty and limitations of liability specific to any
						jurisdiction.
					</div>专门一款关于对源代码修改进行描述的规定，要求所有再发布者都得有一个专门的文件就对源代码程序修改的时间和修改的方式有描述。</li>
				</ul></p>
			</div>
			<div>
				<h3><a href="https://choosealicense.com/licenses/gpl-3.0/">GNU GPL v3.0</a></h3>
				<p>GPL v3与GPL v2类似。区别在于，不仅要求用户公布修改的源代码，还阻止了其他一些私有化的方式，例如：不得将产品内的软件“tivo化”或“锁定”，或者（用行业内的话来说）
				“安全启动”，也就是说，不得以任何形式阻止用户修改产品内的以 GPL 许可协议发布的软件。</p>
			</div>
			<div>
				<h3><a href="http://opensource.org/licenses/BSD-3-Clause">BSD (3-Clause) License</a></h3>
				<p>BSD允许使用者修改和重新发布代码(以其他协议形式)，允许闭源商业发布和销售。
				BSD鼓励代码共享的同时，要求尊重代码作者的著作权。使用BSD协议，需要遵守以下规则：<br>
				<ul>
					<li>再发布的产品中包含源代码，则在源代码中必须带有原来代码中的BSD协议</li>
					<li>如果再发布的只是二进制类库/软件，则需要在类库/软件的文档那个和版权声明中包含原来代码中的BSD协议</li>
					<li>不可以用开源代码的“作者/机构的名字”或“原来产品的名字”做市场推广</li>
				</ul>
				</p>
			</div>
			<div>
				<h3><a href="https://choosealicense.com/licenses/mit/">MIT License</a></h3>
				<p>MIT许可证之名源自麻省理工学院（Massachusetts Institute of Technology, MIT），又称「X条款」（X License）或「X11条款」（X11 License）
				MIT内容与三条款BSD许可证（3-clause BSD license）内容颇为近似，但是赋予软体被授权人更大的权利与更少的限制。<br>
				被授权人有权利使用、复制、修改、合并、出版发行、散布、再授权及贩售软体及软体的副本。<br>
				被授权人可根据程式的需要修改授权条款为适当的内容。<br>
				在软件和软件的所有副本中都必须包含版权声明和许可声明<br>。
				此授权条款并非属copyleft的自由软体授权条款，允许在自由/开放源码软体或非自由软体（proprietary software）所使用。
				此亦为MIT与BSD（The BSD license, 3-clause BSD license）本质上不同处。
				MIT条款可与其他授权条款并存。另外，MIT条款也是自由软体基金会（FSF）所认可的自由软体授权条款，与GPL相容。</p>
			</div>
			<div>
				<h3><a href="https://choosealicense.com/licenses/apache-2.0/">Apache License 2.0</a></h3>
				<p>Apache Licence是著名的非盈利开源组织Apache采用的协议。该协议和BSD类似，同样鼓励代码共享和尊重原作者的著作权，同样允许代码修改，
				再发布（作为开源或商业软件）。需要满足的条件也和BSD类似：
				<ol>
					<li>需要给代码的用户一份Apache Licence</li>
					<li>如果你修改了代码，需要在被修改的文件中说明。</li>
					<li>在延伸的代码中（修改和有源代码衍生的代码中）需要带有原来代码中的协议，商标，专利声明和其他原来作者规定需要包含的说明。</li>
					<li>如果再发布的产品中包含一个Notice文件，则在Notice文件中需要带有Apache Licence。你可以在Notice中增加自己的许可，但不可以表现为对Apache Licence构成更改。</li>
				</ol>Apache Licence也是对商业应用友好的许可。使用者也可以在需要的时候修改代码来满足需要并作为开源或商业产品发布/销售。</p>
			</div>
			<div>
				仍然感到困惑？不急，还有图~(￣▽￣)~*：<br>
				<img alt="简略图" src="https://www.linuxprobe.com/wp-content/uploads/2017/02/how-choice-license01.png" ><br>
				结束了？其实还有图！？~(￣▽￣)~*<br>
				<img alt="表格" src="https://www.linuxprobe.com/wp-content/uploads/2017/02/how-choice-license.png" ><br>
				这次真没图了(￣(工)￣)<br>
			</div>
		</div>
		<div class="yingjian">
			<h2>My project isn’t software!</h2>
			<p>上面说了一大堆软件开源许可证，其实他们对开源硬件并不算友好，因此GitHub为我们提供了“<a href="https://choosealicense.com/non-software/">My project isn’t software”</a>”选项</p>
			<p>我们为原文做了简单翻译：</p>
			<div>
				<h3 id="data-media-etc">数据，媒体等</h3>
				<p><a href="/licenses/cc0-1.0/">CC0-1.0</a>, <a href="/licenses/cc-by-4.0/">CC-BY-4.0</a>, 
				和<a href="/licenses/cc-by-sa-4.0/">CC-BY-SA-4.0</a>是用于从数据集到视频的非软件材料的<a href="https://opendefinition.org">OPEN</a> 
				licenses。<a href="https://creativecommons.org/faq/#can-i-apply-a-creative-commons-license-to-software">注意CC-BY-4.0和CC-BY-SA-4.0 不得被用于软件。</a>
				</p>
				<h3 class="documentation">文档</h3>
				<p>任何开源软件许可或媒体的开放许可(请参见<a href="#data-media-etc">上文</a>)也适用于软件文档。如果您为软件及其文档使用不同的许可证，
				请确保指定文档中的源代码示例也已获得软件许可证的许可。</p>
				<h3 class="fonts">字体</h3>
				<p><a href="https://choosealicense.com/licenses/ofl-1.1/">SIL Open Font License 1.1</a>协议使字体完全开源并且允许该字体被其他工程随意使用。</p>
				<h3 class="mixed-projects">混合项目</h3>
				<p>如果您的项目包含软件和其他内容的混合，您可以为一个项目附上多个许可证，只要您明确说明具体每个许可证适用于项目的哪一部分。请以该站点的许可声明为例。
				本站点的readme就是关于混合项目的<a href="https://github.com/github/choosealicense.com#license">示例</a>。</p>
			</div>
		</div>
		<div class="jieshuyu">
			<p>以上可能是全网最全的开源协议选择指南了😀，希望能对你有所帮助；这里还有一篇关于法律问题的硕士论文：《开源软件许可证的法律效力研究》大家可以观赏一下。</p>
		</div>
	</body>
</html>
