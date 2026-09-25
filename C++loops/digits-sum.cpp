#include<iostream>
int main(){
    int x,i,n,s=0;
    std::cout<<"Enter THe Number"<<std::endl;
    std::cin>>x;
    while (x!=0)
    {
       i=x%10;
       s=s+i;
       x=x/10;
    }
     std::cout<<"sum is "<<s<<std::endl;
     return 0;
}