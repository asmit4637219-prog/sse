#include <iostream>
int main(){
    int n;
    std::cout<<"Enter the number of element \n";
    std::cin>>n;
    int k[n];
    int l,max;
    for (auto i = 0; i <n; i++)
    {
        std::cout<<"Enter the input\n";
        std::cin>>k[i];
    }
    //declaring an array
    std::cout<<"Enter the maximum element\n";
    std::cin>>max;
    int hash[max]={0};
    //precalculation
    for (auto i = 0; i <n; i++)
    {
       hash[k[i]]+=1;
    }
    int number;
    std::cout<<"Enter the number\n";
    std::cin>>number;
    std::cout<<"the number of times "<<number<<" appeared = "<<hash[number];
    return 0;
}