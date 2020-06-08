# 现代OpenGL教程

README: [ENGLISH](https://github.com/alexwoo1900/modernopengltutorials/blob/master/README.md) | [简体中文](https://github.com/alexwoo1900/modernopengltutorials/blob/master/README_CN.md)

## 这是什么
这是[现代OpenGL教程](http://ogldev.org/index.html)中的示例工程的64位编译版本。

为了让OpenGL的初学者更容易地在x64的电脑上运行这些示例，我重新编译了教程中所有必需的类库以及重新组织了工程结构。

![demo1](https://raw.githubusercontent.com/alexwoo1900/modernopengltutorials/master/docs/assets/demo1.png)
![demo2](https://raw.githubusercontent.com/alexwoo1900/modernopengltutorials/master/docs/assets/demo2.png)


## 目录
- Modern-OpenGL-Tutorials (解决方案)
    - asserts (资源文件)
    - include (头文件)
    - lib (静态链接库)
    - shaders (着色器文件)
    - tutorial00 (打印用户环境中的OpenGL信息)
    - tutorial01 ~ tutorial53 (53个教程示例)
    - x64 (编译后的可执行文件)

## 如何使用
1. 安装 Visual Studio 2015
2. 把 "Modern_OpenGL_Tutorials" 文件夹放到 "projects" 下
3. 运行 "Modern_OpenGL_Tutorials" 文件夹下的 "Modern_OpenGL_Tutorials.sln"

## 注意
tutorials50 到 tutorials53 中的Vulkan环境并没有配置，因为我的显卡太旧不能支持Vulkan。