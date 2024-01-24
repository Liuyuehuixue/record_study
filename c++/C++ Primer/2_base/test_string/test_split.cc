#include<iostream>
#include<string.h>

int main(){
    std::string str1 = "aa_v1.mxf";
    size_t lastpos = str1.rfind("_");
    std::string str2  = str1.substr(lastpos);
    std::string str3  = str1.substr(0, lastpos);
    std::cout<<str3;
    return 0;
}