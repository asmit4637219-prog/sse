#include<iostream>
int main(){
    int j,i,input,s2=0;
    std::cout<<"Input number of terms"<<std::endl;
    std::cin>>input;
    for (size_t i =1; i <=input; i++)
    {
        int s1=0;
        for (size_t j =1; j <=i; j++)
        {
            s1=s1+j;
            
        }
        std::cout<<i<<"="<<s1<<std::endl;
        s2=s2+s1;
       
    }
     std::cout<<"Sum of series is "<<s2<<std::endl;
    
}