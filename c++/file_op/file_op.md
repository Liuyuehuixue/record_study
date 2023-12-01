### c++文件相关操作

#### check文件夹是否存在以及创建文件夹

mkdir() 需要有足够权限

修改文件夹及该目录下所有文件/文件夹权限

chmod  -R XXX(最高777)  folderPath

```c++
#include <sys/stat.h>  
#include <stdio.h>  
  
int main() { 
   std::string folderPath = "/mnt/share"
    
   if (access(folderPath.c_str(), F_OK) == 0) {
       	std::cout << "Folder " << folderPath << " already exists" << std::endl;

    } else {
        std::cout << "Folder " << folderPath << " not exist" << std::endl;
        if (mkdir(folderPath.c_str(), 0755) == 0) {
            std::cout << "Make " << folderPath << " successfully" << std::endl;
        } else {
            std::cerr << "Make " << folderPath << " failed" << std::endl;
            return -1;
        }
    }
     
    return 0;  
}
```

