#include<iostream>
int main(){
    int k[10],i;
    for (size_t i = 0; i <=9; i++)
    {
        std::cout<<"input number"<<i+1<<std::endl;
       std::cin>>k[i]; 
    }
  /*  for (size_t i = 1; i <=10; i++)
    {
        std::cout<<"input number "<<i<<" = "<<k[i]<<std::endl;
    }*/ 
    for(auto& element:k){
         std::cout<<"input number "<<element<<std::endl;
    }
    return 0;
}