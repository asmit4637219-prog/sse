#include <iostream>
int main(){
    float p,r,t;
    std::cout<<"Enter principal, rate of interest and time period"<<std::endl;
    std::cin>>p>>r>>t;
    std::cout<<"SI will be "<<(p*r*t)/100<<std::endl;
    return 0;
}