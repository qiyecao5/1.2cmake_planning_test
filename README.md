# 1.2cmake_planning_test

假如说项目稍微复杂一点,所有的文件都在一个目录下面,就不方便我们管理了,容易造成混乱
    首先建一个src文件,存放.cpp文件
    建个include文件夹存放头文件

首先基于process.cpp这个文件 生成可执行文件
在windows平台上可执行文件就是.exe
动态库就是.dll
我们之前在运行一些软件的时候,可能会弹窗缺少.dll 文件就是缺少这个,说明就是这个动态库缺失了或者没有放在 .exe同一级目录下面
所以我们要指定一下,这个动态库生成的目录