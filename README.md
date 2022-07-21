# LearningUE4

本项目由UE4.27.2源码版本开发。

成品链接：[【腾讯微云】安卓apk和演示视频](https://share.weiyun.com/NjZ9iMrA)

## How to build

请在**Windows平台**下使用**UE4.27源码版本**编译运行。

1. 在合适目录下
    ```
    git clone https://github.com/EpicLolia/LearningUE4
    ```
2. 打开文件夹，右键.uproject文件，选择Genrate VS project file，生成.sln文件。
3. 使用VS打开sln，编译运行即可。

## Mission1: 打包安卓平台

首先建议使用vs2019，不容易出错。如果使用vs2022，将ue项目的.net framework 升级到4.8的话，会在打包阶段无法编译C#文件而报错。

打包安卓平台需要安装安卓sdk，build-tools和ndk。这一部分可以参考虚幻官方文档。

1. [【官方文档】安卓打包环境配置](https://docs.unrealengine.com/4.27/zh-CN/SharingAndReleasing/Mobile/Android/Setup/AndroidStudio/)
2. [【官方文档】打包Android项目](https://docs.unrealengine.com/4.27/zh-CN/SharingAndReleasing/Mobile/Android/PackagingAndroidProject/)

需要注意的是，在打包环境配置时，**请保持sdk和build-tools的版本一致，并且不高于30版本。**

#### 打包选项

1. arm架构使用默认的armabi-v7a即可，arm64的手机也可以兼容该版本。
2. 纹理打包选项选择etc2或者astc
3. 记得勾选打包apk


