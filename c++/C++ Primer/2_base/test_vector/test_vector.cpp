#include <vector>
#include <iostream>

int main(){

    std::vector<int> v1;
    for(int i = 0; i<10; i++){
        v1.push_back(i);
        std::cout<<v1.at(0)<<std::endl;
    }
    return 0;
}