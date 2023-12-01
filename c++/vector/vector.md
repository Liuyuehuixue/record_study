### vector

#### 1.1 筛选出vector2中不存在于vector1的所有字符串

```
#include <iostream>

#include <vector>

#include <string>

int main() {

  // 定义第一个字符串列表

  std::vector<std::string> stringList1;

  

  // 添加元素到第一个列表

  stringList1.push_back("aa1_a1.mxf");

  stringList1.push_back("aa1_v1.mxf");

  stringList1.push_back("aa1_v2.mxf");

  stringList1.push_back("aa1_v3.mxf");

  stringList1.push_back("aa1_v4.mxf");

  stringList1.push_back("aa1_v5.mxf");

  stringList1.push_back("aa1_v6.mxf");

  stringList1.push_back("aa1_v7.mxf");

  stringList1.push_back("aa1_v8.mxf");

  // 定义第二个字符串列表

  std::vector<std::string> stringList2;

  // 添加元素到第二个列表

  stringList2.push_back("aa1_a1.mxf");

  stringList2.push_back("aa1_v1.mxf");

  stringList2.push_back("aa1_v2.mxf");

  std::vector<std::string> deleteIds;

  bool flag;

  for (const auto& mxfInfo : stringList1) {

​    flag = true;

​    for (const auto& filenameReq : stringList2){

​      if(filenameReq==mxfInfo){

​        flag = false;

​        break;

​      }

​    }

​    if(flag){

​      deleteIds.push_back(mxfInfo);

​    }

  }

  // 打印列表的内容

  std::cout << " List deleteIds: ";

  for (const auto& str : deleteIds) {

​    std::cout << str << " " << std::endl;

  }

  std::cout << std::endl;

  return 0;

}
```

