#include <iostream>
int main(){
    int x,y;
    std::cout<<"This program is to find number of even and odd numbers between 1 to n"<<std::endl;
    std::cout<<"Enter n"<<std::endl;
    std::cin>>x;
    for (size_t y = 1; y <=x; y++)
    {
        if (y%2==0)
    {
        std::cout<<y<<" Even"<<std::endl;
    }
    else
    {
        std::cout<<y<<" Odd"<<std::endl;
    }
    }
    return 0;
}