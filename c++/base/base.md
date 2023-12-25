



















































#### 处理字符串字符

##### range for 语句遍历

```
for(const auto &c: input) : 不能赋值c，只读
for(auto &c: input) : 赋值c，input也会改变
for(auto c: input) : 赋值c，input不会改变，只读
```



```c++
#include<cctype>
#include<iostream>

int main(){

    std::string input = "AA#aa &123";
    // getline(std::cin, input);

    /* 
    error: c = tolower(c);
    for(const auto &c: input){
        if(isalpha(c)){
            c = tolower(c);
        }
    }
    std::cout << input << std::endl;
    */

    for(auto c: input){
        if(isalpha(c)){
            c = tolower(c);
        }
    }
    std::cout << input << std::endl;

    for(auto &c: input){
        if(isalpha(c)){
            c = tolower(c);
        }
    }
    std::cout << input << std::endl;

    return 0;
}
```

##### 下标运算符[]

```
s.empty();  //字符串s是否为空

s.size();   //s长度

s[i];       //第i个元素
```