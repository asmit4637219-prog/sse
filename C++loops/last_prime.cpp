#include<iostream>
int main(){
    int x,y,k;
    std::cout<<"Enter an number"<<std::endl;
    std::cin>>x;
    for (size_t y = x; y>=1; y--)
    {
      int  count=0;
        for (size_t k = 1; k <=y; k++)
        {
            if (y%k==0)
            {
                count++;
            }
            
        }
        if (count==2)
        {
            std::cout<<"Nearest lesser prime is "<<y<<std::endl;
            break;
        }
        
    }
    return 0;
}