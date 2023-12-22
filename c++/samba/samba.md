### samba


Samba 是一个开源的软件套件，用于在不同的操作系统之间实现文件和打印机共享。它允许在类似于 Windows 的网络环境中共享文件和资源，使得 Linux 和其他类 Unix 操作系统能够与 Windows 系统无缝交互。

以下是 Samba 的一些主要特点和功能：

1. **文件共享：** Samba 允许你在不同的计算机之间共享文件和目录，就像在本地文件系统上一样。
2. **打印机共享：** 除了文件共享，Samba 还支持打印机共享，使得可以在网络上使用一台打印机。
3. **与 Windows 互操作性：** Samba 的设计目标之一是实现与 Windows 操作系统的高度互操作性，因此它能够与 Windows 网络中的计算机无缝通信。
4. **支持 SMB/CIFS 协议：** Samba 使用 SMB (Server Message Block) 和 CIFS (Common Internet File System) 协议，这是 Windows 网络上常用的协议。
5. **身份验证和安全性：** Samba 提供了身份验证机制，包括用户账户和密码管理，以确保只有授权用户可以访问共享资源。它还支持加密和其他安全性特性。
6. **域控制器功能：** Samba 可以用作域控制器，提供类似于 Windows Server 的域服务功能。
7. **跨平台支持：** Samba 被设计为跨平台的工具，因此可以在多种操作系统上运行，包括 Linux、Unix、macOS 等。

Samba 的配置相对复杂，因为它涉及到许多参数和设置。通常，管理员需要编辑 Samba 配置文件，以定义共享资源、访问权限和其他相关设置。 Samba 的稳定性和广泛的采用使得它成为企业网络中的一个重要组件，尤其是在混合操作系统环境中。



###  ubuntu 20.04安装

#### 更新软件包列表

`sudo apt update`

`sudo apt upgrade`

#### 安装samba

`sudo apt install samba`

#### 配置文件

备份

`sudo cp /etc/samba/smb.conf /etc/samba/smb.conf.bak`

配置

`sudo vim /etc/samba/smb.conf`

[viashare]
   comment = Viashare Folder
   path = /mnt/viashare/
   browseable = yes
   read only = no
   valid users = xxx



创建samba用户

`sudo smbpasswd -a username`

重启 Samba 服务

`sudo service smbd restart`











··
