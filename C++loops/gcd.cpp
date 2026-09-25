#include<iostream>
int main(){
    int x,i,y,m,t;
    std::cout<<"Enter 2 number"<<std::endl;
    std::cin>>x>>y;
    if (x>y)
    {
         for (size_t i = 1; i <=x; i++)
    {
    if((x%i==0)&&(y%i==0)){
        t=i;
    }
    }
     std::cout<<"largest factor is "<<t<<std::endl;
    }
    else{
         for (size_t i = 1; i <=y; i++)
    {
    if((x%i==0)&&(y%i==0)){
        t=i;
    }
    }
     std::cout<<"largest factor is "<<t<<std::endl;
    }
    
   
  
   return 0;
    
}