#include<iostream>
#include<cmath>
void p1(int n){
    int k,l=0;
    int j=n;
    while(n>0){
         k=n%10;
         l=l+pow(k,3);
         n=n/10;
    }
    if (l==j)
    {
        std::cout<<"Armstrong Number";
    }
    else
    {
         std::cout<<"Not a armstrong number ";
    }
    
}
int main(){
    int n;
    std::cout<<"Enter The Number \n";
    std::cin>>n;
    p1(n);
    return 0;
}