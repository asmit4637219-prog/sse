#include<iostream>
int main(){
    int x,y,i,l,j=1;
    std::cout<<"please enter the range of numbers"<<std::endl;
    std::cin>>x>>y;
    i=x;
    for (size_t i = x; i <= y; i++)
    {
        int count=0;
        for (size_t j =1; j <=i; j++)
        {
        l=i%j;
        if (l==0)
        {
            count++;
        }
        }
         if (count==2)
        {
            std::cout<<i<<" is prime"<<std::endl;
        }
       /* else if (count>2)
        {
            std::cout<<i<<" is not prime"<<std::endl;
        }*/
    }
     return 0;
}