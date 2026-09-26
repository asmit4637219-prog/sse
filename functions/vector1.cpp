#include<iostream>
#include<vector>
void function(std::vector<int>vect,int input){
       for (int j = 1; j <input;j++)
   {
    int k=vect[j-1];
    int l=vect[j];
    int m= vect[j+1];
    if ((l<k)&&(l<m))
    {
        std::cout<<l<<" ";
    }
}
}
int main(){
    int input,store;
   std:: vector<int>vect;
   std::cout<<"Enter the number of terms you want to input \n";
   std::cin>>input;
   for (int i = 1; i <=input; i++)
   { 
     std::cout<<"enter no "<<i<<" ";
     std::cin>>store;
     vect.push_back(store);
   }
   
   function(vect,input);
    return 0;
}