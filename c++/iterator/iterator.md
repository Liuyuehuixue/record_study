#### iterator基本使用

```c++
// 由编译器决定b，e类型
// b为v第一个元素 e为v尾元素的下一个位置
vector<int> v;
auto b = v.begin();  // 迭代器类型为 vector<int>::iterator; 可读写
auto e = v.end();    // 迭代器类型为 vector<int>::iterator; 可读写

const vector<int> v1;
auto b = v.begin(); // 迭代器类型为 vector<int>::cconst_iterator; 可读
auto e = v.end(); // 迭代器类型为 vector<int>::const_iterator; 可读

cbegin();//返回const迭代器，不可返回元素
cend();  //

运算符：
    *it
    it—>
    (*it).
    ++it
    --it
    it1==it2
    it1!=it2
    
支持的运算
    iter + n
    iter - n
    iter += n
    iter += n
    iter2 - iter1
    >, >=, <, <=
    
```

#### 示例

##### string

```c++
#include<iostream>
#include<string.h>
#include<cctype>

int main(){
    std::string str1 = "AaBb";

    for(auto b = str1.begin(); b != str1.end() ; ++b){
        if(isalpha(*b)){
            *b = tolower(*b);
        }
    }

    std::cout << str1 << std::endl;
    return 0;
}
```



##### 排序

```c++
#include<iostream>
#include<vector>
#include<algorithm>

int main(){
    
    std::vector<int> my_list{21, 9, 10, 18};

    my_list.push_back(2);
    std::sort(my_list.begin(), my_list.end());

    for(auto b = my_list.begin(); b != my_list.end() ; ++b){
        std::cout << *b << std::endl;
    }

    return 0;
}
```

