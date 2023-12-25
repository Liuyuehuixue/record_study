### vector

#### 1.基本使用

##### 定义和初始化

```
vector<T> v;

vector<string> v;
vector<string> v1{"aa","bb"};
vector<string> v2("aa","bb"); //错误

vector<int> v1(10);  // 10个元素，都为0
vector<string> v2(10); // 10个元素，都为空string对象
vector<string> v{"aa","bb"};

```

##### 添加元素

v1.push_back(xx);

**不能使用下标添加**

正确添加方式

```c++
for(decltype(v1.size()) i=0; i!=10; i++)
    v1.push_back(ix);
```



#### 2 使用示例

##### 筛选出vector2中不存在于vector1的所有字符串

```
#include <iostream>

#include <vector>

#include <string>

int main() {

  // 定义第一个字符串列表

  std::vector<std::string> stringList1;

  
  std::string basenamae = "";
  std::string fullnamae = "";
  // 添加元素到第一个列表
  for(i=0; i<=9; i++){
  	basenamae = "aa1_";
  	if(i==0){
  		fullname = basename + "v1.mxf";
  		stringList1.push_back(fullname);
  	}else{
  		fullname = basename + "_a" + std::to_string(i)+".mxf";
  		stringList1.push_back(fullname);
  	}
  }

  // 定义第二个字符串列表

  std::vector<std::string> stringList2;

  // 添加元素到第二个列表

  stringList2.push_back("aa1_a1.mxf");

  stringList2.push_back("aa1_v1.mxf");

  stringList2.push_back("aa1_v2.mxf");

  std::vector<std::string> deleteIds;

  bool flag;

  for (const auto& mxfInfo : stringList1) {

    flag = true;

    for (const auto& filenameReq : stringList2){

      if(filenameReq==mxfInfo){

        flag = false;

        break;

      }

    }

    if(flag){

      deleteIds.push_back(mxfInfo);

    }

  }

  // 打印列表的内容

  std::cout << " List deleteIds: ";

  for (const auto& str : deleteIds) {

    std::cout << str << " " << std::endl;

  }

  std::cout << std::endl;

  return 0;

}
```

