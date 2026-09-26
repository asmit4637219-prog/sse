#include <iostream>
void add(int N,int A){
   int B= N+A;
   std::cout<<B;
}
int main(){
    int N,A,B;
    std::cout<<"Number  1 \n";
    std::cin>>N;
    std::cout<<"number2 \n";
    std::cin>>A;
    add(N,A);
    return 0;
}