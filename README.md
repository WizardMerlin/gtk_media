# gtk_media
_practise c language and connect to my media work_


##开发之前：
---

1. 这是个media player的项目(播放音频audio)，目的在于练习c语言。

2. 主要练习指针，文件，数据库，以及熟悉linux下的开发。

3. 不跨平台，主要在linux平台

###环境：

1. emacs  
2. cmake
3. gdb
4. gtk3.0+
5. glade
6. GStreamer多媒体框架
7. 

_之后用到再补充_

###补充：

本来做gui应该选用熟悉的qt，但是qt需要cpp，并且我也知道，用c语言去开发，使用gtk+那一套，困难，并且慢。

(简单的说，就是想用c语言看看)

然而事情表面之下，一定还有另外一面，等到开发完毕，再来补上。


##开发之中：
---

_开始开发的时候，真的是一点儿头绪都没有，也没有人指点，所以就到网上Google资料啊，最后自己慢慢摸索_

###0.技术架构：

_从上到下是依赖关系。_

上层： 媒体播放器
中层： GTK+3.0界面框架 + GStreamer多媒体框架
下层： Linux内核(控制硬件)



###1.主要模块(5个)：
1. 用户界面模块(解析用户的界面操作，是点击了哪里还是做了什么操作,并且做好图形显示)
2. 核心控制模块(相当于一个cpu，调用和监管其他模块)
3. 媒体库模块(维护媒体文件，媒体文件信息以及当前播放列表)
4. 媒体播放控制模块(开始，暂停，快进，快退，终止，调整音量)
5. 媒体文件解码模块(对不同格式不同采样率的文件进行解码，主要利用GStreamer框架)


(由于整个工程只有我一个人开发维护，所以，按照我的意思，我总是先做好接口，再去做界面)
(实际开发，按照以往的经验，很可能是先设计好界面，然后才去要接口；界面原型优于一切，毕竟用的是用户，用户的需求放在第一位)





###2.目录组织
项目文件的组织参考：
http://blog.chinaunix.net/uid-28939088-id-3753567.html


1. include(头文件)
2. res(资源文件)
3. src(源文件)
4. lib(库文件)
5. bin(编译结果，可执行文件)
6. config(配置文件) ---not now
7. README (说明文件),LICENSE(协议文件)
8. Makefile, CMakeLists.txt (now we use cmake for building our system)
9. doc  (if we have)
10.test (每写一个功能或者模块，就立马测试一下)


_when you build(using cmake), you'd better make a new dir build for out-source building._


_各子目录下还有模块._


###3.开发步骤：
略。
(学过软件工程，或者工程学思想的人可以按照自己的想法去控制进度)



###4. 遇到的问题
1. build the system is so annoying. (I choose to use cmake for cross-plat form)
2. 





##开发之后：
---