#include<iostream>
#include<string>
void name(int n,std::string s){
    for (int i = 0; i < n; i++)
    {
        std:: cout<<s<<"\t";
    }
    
}
int main (){
    int n;
    std::string s;
    std::cout<<"enter the number of times you want to print your name \n";
    std::cin>>n;
    std::cout<<"Enter your name \n";
    std::cin>>s;
    name(n,s);
    return 0;
}