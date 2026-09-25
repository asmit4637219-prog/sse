#include<iostream>
int main(){
    int x=5;
    float y=3.166868682277727828;
    double z=3.166868682277727828;
    int a;
    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
    std::cout<<z<<std::endl;
    std::cout<<sizeof(x)<<std::endl;
    std::cout<<sizeof(y)<<std::endl;
    std::cout<<sizeof(z)<<std::endl;
    std::cout<<"Enter a number"<<std::endl;
    scanf("%d",&a);
    std::cout<<x+a<<std::endl;
    return 0;
}