#include<iostream>
#include<string.h>
#include<cctype>
#include<vector>
#include<algorithm>

int main(){
    std::string str1 = "AaBb";

    for(auto b = str1.begin(); b != str1.end() ; ++b){
        if(isalpha(*b)){
            *b = tolower(*b);
        }
    }

    std::cout << str1 << std::endl;

    std::vector<int> my_list{21, 9, 10, 18};

    my_list.push_back(2);
    std::sort(my_list.begin(), my_list.end());

    for(auto b = my_list.begin(); b != my_list.end() ; ++b){
        std::cout << *b << std::endl;
    }

    return 0;
}