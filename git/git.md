##### git 安装

1. 查看系统版本

```linux
cat /etc/os-release
```



2. 查看git版本

```
git  --version
```



3. 安装

```
sudo apt update

sudo apt install git

git --version

git config --global user.email "you@example.com"

git config --global user.name "Your Name"


ssh-keygen -t rsa -b 4096 -C "XXX@XXX.com"

cat ~/.ssh/id_rsa.pub

```



4. 克隆

```
git clone https://github.com/Liuyuehuixue/blogX.git
```



5. 添加子模块

```
git submodule add  https://github.com/log4cplus/log4cplus 3rd/log4cplus
```



6. 查看状态、

```
git status
```



7. 提交





git add .

git commit -m "add submodule log4cplus"

git push origin master

