#include <iostream>
int count=0;
void f2(int n){
    for (int i =n; i>=1; i--)
    {
        std::cout<<i;
        std::cout<<",";
    }
    
}
void f3(int n){
    int sum =0;
    for (int i =n; i>=1; i--)
    {
        sum=sum+i;

    }
    std::cout<<sum<<std::endl;
}
/*void f(){
    if (count==3)
    {
        return;
    }
    else{
        std::cout<<count<<std::endl;
        count++;
    }
    f();
}*/
int main(){
    int n;
    std::cout<<"enter the number \n";
    std::cin>>n;
    //f();
    f3(n);
    return 0;
}