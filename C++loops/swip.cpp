#include <iostream>
int main(){
int x,y,t;
std::cout<<"Enter two number"<<std::endl;
std::cin>>x>>y;
std::cout<<"entered no 1 = "<<x<<" and no 2= "<<y<<std::endl;
t=y;
y=x;
x=t;

std::cout<<"swapped numbers are 1 = "<<x<<" and no 2 "<<y<<std::endl;
return 0;
}