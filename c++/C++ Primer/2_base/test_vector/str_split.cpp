#include <vector>
#include <iostream>
#include <sstream>
#include <string>

int main(){
    std::string str = "123_456_789";
    std::vector<std::string> res;

    std::istringstream iss(str);
	while(getline(iss, str, '_')){
		res.push_back(str);
	}

	std::size_t videoid_seg = res.size();
	if(videoid_seg != 3){
		std::cout<<"error"<<std::endl;
	}
    for(size_t i=0; i<res.size(); i++){
        std::cout<<res.at(i)<<std::endl;
    }
    return 0;
}