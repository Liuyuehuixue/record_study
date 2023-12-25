#include<iostream>
#include<string.h>

int main(){
    std::string str1 = "aa";
    std::string str2 = str1;
    std::string &str3 = str1;
    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;
    std::cout << str3 << std::endl;

    str1 = "bb";
    std::cout << str1 << std::endl;
    std::cout << str2 << std::endl;
    std::cout << str3 << std::endl;

    std::string str4(10, 'c');
    std::cout << str4 << std::endl;

    // cin cout string
    
    std::string input_str;
    std::cin >> input_str;
    std::cout << input_str << std::endl;
    /*   
        Input:  hello  world  !  
        Output: hello
    */
    auto len = input_str.size();
    std::cout << len << std::endl;

    std::string str_add;
    // error : 字符串字面值相加
    //str_add = "aa" + "bb";

    // getline
    // while(getline(std::cin, input_str)){
    //     if(!input_str.empty())
    //         if(input_str.size()>8)
    //             std::cout << input_str << std::endl;
    // }
    
    return 0;
}