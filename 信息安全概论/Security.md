##安全事件及个人看法

<br/>

信息安全(1)班    夏翔    3116005158

------

###华住旗下酒店5亿条用户信息泄漏
发生于2018.08.28
 - **事件概述**

华住集团旗下酒店开房记录疑似泄露，涉及共计约5亿条公民个人信息，售卖者称数据
已在8月14日脱库，此事一经披露随即引发公众关注。8月28日,暗网中文论坛上出现一
则出售华住酒店数据的帖子，涉及1.3亿人身份及开房信息的数据被标价为8比特币或
520门罗币（约等于37万人民币）出售。网传信息显示，数据包括官网注册资料：身份
证、手机号、邮箱、身份证号、登录密码等，共53G，约1.23亿条记录；入住登记身份
信息：姓名、身份证号、家庭住址、生日、内部ID号，共22.3G，约1.3亿条；酒店开
房记录：内部ID号、同房间关联号、姓名、卡号、手机号、邮箱、入住时间、离开时间、
酒店ID号、房间号、消费金额等，共66.2G，约2.4亿条；合计近5亿条信息。据悉，
此次数据涉及酒店范围包括汉庭、美爵、禧玥、诺富特、美居、CitiGO、桔子、全季、
星程、宜必思尚品、宜必思、怡莱、海友等多个家酒店品牌。

   ![](http://www.williamlong.info/upload/5445_1.jpg)

  华住酒店集团随后发布声明称，已第一时间报警，公安机关正在开展调查,
  同时聘请人员进行数据是否来源认定。其同时呼吁请相关网络用户、
  网络平台立即删除并停止传播上述信息保留追究相关侵权人法律责任的权利。

   ![](http://www.williamlong.info/upload/5445_3.jpg)

8月28日下午，上海市公安局长宁分局接华住集团运营负责人报案称，
有人在境外网站兜售华住旗下酒店数据，客户信息疑遭泄露，公司已
启动内部自查。警方即介入调查。警方表示，将始终严厉打击非法获
取、买卖、交换、提供公民个人信息等违法犯罪行为，切实保护公民
合法权益。掌握公民个人信息的企事业单位，应严格落实主体责任，
加大信息安全的防护力度。

![](http://www.williamlong.info/upload/5445_4.jpg)

据安全组织“网络尖刀”团队分析认为Github ID为DENGXIAN
GLONG001的程序（疑似华住程序员）曾在GitHub（一个
面向开源及私有软件项目的托管平台)上传了一个名为CMS
项目，项目的配置文件代码里包含了华住敏感的服务器及数
据库信息，被黑客利用攻击导致泄露。

据专业人士表示，“把公司的代码上传到GitHub这样的一个公共平台上，
是正规公司的禁忌，出现这种情况员工都会被公司开除。”此次泄露的信
息包括服务器的IP地址、相应的路径、用户名和密码以及网站程序秘要
等关键信息，黑客可以不费吹灰之力直接访问便能下载这些数据。

![](http://www.williamlong.info/upload/5445_2.jpg)

多位网络安全专业人士表示，此次泄露事件的影响恐较难弥补，将对个人
信息安全带来灾难性后果。根据《网络安全法》、《消费者权益保护法》
的规定，网络运营者不得泄露收集的个人信息，应当采取技术措施和其他
必要措施，确保其收集的个人信息安全，防止信息泄露、毁损、丢失。在
发生或者可能发生个人信息泄露、毁损、丢失的情况时，应当立即采取补
救措施，按照规定及时告知用户并向有关主管部门报告。因此，无论是华
住公司的员工上传数据过程中造成信息泄露的，还是黑客主动攻击华住公
司的网站窃取信息的，华住公司都因没有履行好对消费者的信息安全保护
义务而难辞其咎，依法应承担相应的行政责任和民事责任。
<br/>

------

- **<font color="#dd0000">个人看法</font><br />**
我是在别人博客上查资料的时候发现了讲述这个事情的博文，经过查找这也就是最近的事情但有这么一看法：比无能为力更可怕的是无人在意.令我联想到的词和现状来说，就是数据安全和互互联网成为了数据泄露重灾区。我也是在数据挖掘和生物计算这条道路上跟着实验室老师探索，每当处理大量数据，像病人临床信息，治疗方案一应俱全，在互联网上数据的形式、种类各式各样都见多不怪了，应运而生的是如何管理保护这些数据。此外华住数据滥用也与这次事件有着一些联系。高收益背后，粗放的管理导致酒店行业数据泄露屡禁不止，所谓技术公司的核心实质是安全。华住酒店CEO张敏此前接受21世纪经济报道记者采访时表示，华住在布局高端品牌时， 更注重用户体验。利用大数据为用户画像，推送更加精准的产品与服务，是他们成功的关键。他认为华住看上去是个酒店公司，其实内核是个技术公司。大数据赋能酒店，使华住每开一家酒店，都能获得足够的盈利。华住酒店的财报数据显示，仅仅2017年第四季度，华住新开酒店137家；全年新开酒店达665家。截至2017年12月底，华住尚有696家酒店正在筹建中。在酒店数量高速增长的同时，2017年，华住全年净利润依旧高达12.372亿元人民币（约合1.893亿美元），同比增长53.8%，远超行业水准。成也数据，败也数据。依靠大数据吸引用户的同时，华住似乎忽视了更为重要的信息安全问题。早在 2013 年，华住旗下汉庭酒店被曝出数据泄露，是酒店所使用的 WiFi管理和认证管理系统存在漏洞、数据传输过程加密失效所导致。然而华住的数据安全部分的投入始终有限。财报数据显示，2018年第一季度，华住的其他酒店经营费用仅达4%，其中包括了App建设、IT系统的维护等等。而整个2017全年，此费用均没有超过9%。又在数据安全保障制度并不完备且企业数据安全意识并没有上升到一个高度久而久之，这也成了必然。
