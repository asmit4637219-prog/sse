#include <iostream>
int main(){
    int x,y;
    std::cout<<"Input two number"<< std::endl;
    std::cin >>x>>y;
    std::cout<<"input is "<< x <<"and" <<y <<std::endl;
    std::cout<<"sum is "<<x+y<<std::endl;
     if (x>y)
    {
       std::cout<<"difference is "<<x-y<<std::endl; 
    }
    else{
       std::cout<<"difference is "<<y-x<<std::endl;
    }
    
    std::cout<<"product is "<<x*y<<std::endl;
    if (x>y)
    {
         std::cout<<"quotiet is "<<x/y<<std::endl;
    }
    else{
         std::cout<<"quotiet is "<<y/x<<std::endl;
    }
    return 0;
}