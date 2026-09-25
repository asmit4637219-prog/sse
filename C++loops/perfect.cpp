#include<iostream>
int main(){
    int x,y,i,j=1;
    std::cout<<"Enter the number till you want to check"<<std::endl;
    std::cin>>x;
    for (size_t i = 1; i <=x; i++)
    {//std::cout<<"i= "<<i<<std::endl;
        int z=0;
    for (size_t j = 1; j <i; j++)
        {
            y=i/j;
           // std::cout<<"j= "<<j<<std::endl;
            if (i%j==0)
            {
                z=z+j;
               // std::cout<<"z= "<<z<<std::endl;
            } 
           // std::cout<<"loop end "<<i<<std::endl;
        }
        
            //std::cout<<"z= "<<z<<std::endl;
     if (z==i)
     {
       std::cout<<z<<" is a perfect number "<<std::endl;
     }
        
    }
    
    return 0;
}