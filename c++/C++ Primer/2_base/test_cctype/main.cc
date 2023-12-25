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