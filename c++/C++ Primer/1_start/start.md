#### start

##### 第一个程序

```c++
//first.cpp
#include<iostream>

int main(){
    std::cout << "hello world!"<< std::endl;
    return 0;
}
```

编译 ： g++   first.cpp  -o first

运行：./first



##### 输入输出

```c++
// cin_cout
#include<iostream>

int main(){
    std::cout << "Enter two numbers: "<< std::endl;
    int v1, v2;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
              << " is " << v1 + v2 << std::endl;
    return 0;
}
```

##### 注释

//

/* */

```c++
#include<iostream>

int main(){
    std::cout << "/*";
    std::cout << "*/";
    
    // error
    // std::cout << /* "*/" */;  
    
    std::cout << /* "*/" /* "/*" */;
    return 0;
}
```

输出:   

```
/**/ /* 
```

##### 控制流

###### while

###### for

###### if else

##### 

