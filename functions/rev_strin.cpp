#include<iostream>
#include<string>

void str(std::string &s,int n,int i){
    if (i>=n)
    {
        return;
    }
    else{
        std::swap(s[i],s[n-1]);
        str(s,n-1,i+1);
    }
    
}
int main(){
    std::string s,l;
    std::cout<<"Enter a string\n";
    std::cin>>s;
    l=s;
    int n=s.size();
    int i=0;
    str(s,n,0);
  if ( s==l)
    {
        std::cout<<"pallindrome"<<std::endl;
    }
    else{
        std::cout<<"not a pallindrome\n";
    }
  
    return 0;
}