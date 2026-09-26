#include<iostream>
#include<vector>
void rev(std::vector<int>&arr,int n,int m){
    if(m>=n){        
        return;
    }
    else{
        std::swap(arr[m],arr[n]);  

     
        rev(arr,n-1,m+1);   
    }
}
int main(){
    int n,k,m=0;

    std::vector<int>arr;
    std::cout<<"Enter the number of terms you want to input \n";
    std::cin>>n;
    for (int i = 0; i <n; i++)
    {
        std::cout<<"Enter number"<<i+1<<std::endl;
        std::cin>>k;
        arr.push_back(k);
    }
    rev(arr,n-1,0);
    for (int i = 0; i <n; i++)std::cout<<arr[i]<<std::endl;
    
    return 0;
}