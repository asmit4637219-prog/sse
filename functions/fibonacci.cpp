#include<iostream>
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    else{
      int first=fibonacci(n-1);
      int second=fibonacci(n-2);
      return first+second;
    }
}

int main(){
    int n;
    std::cout<<"Enter the fibonacci term \n";
    std::cin>>n;
     int l=fibonacci(n);
     std::cout<<l;
}