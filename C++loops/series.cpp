#include<iostream>
#include<cmath>
int main(){
   float input,k,n;
   int j,i;
    float s=0;
     float l=0;
    std::cout<<"Input a Number"<<std::endl;
    std::cin>>input;
    for (size_t i =1; i <=input; i++)
    {
        k=std::pow(i,i);
        s=s+1/k;
    }
     std::cout<<"sum is "<<s<<std::endl;
    for (size_t j =1; j <=input; j++)
    {
        n=std::pow(j,2);
        l=l+n;
    }
     std::cout<<"sum is "<<l<<std::endl;
     return 0;
}