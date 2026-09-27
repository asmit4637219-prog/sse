#include<iostream>
#include<vector>
int linear(std::vector<int> &arr,int k){
    for (int i = 0; i <arr.size(); i++)
    {
       if(arr[i]==k){
        return i;
       }

    }
    return -1;
    
}
int main(){
    std::vector<int> arr;
    int n;
    std::cout<<"Enter the number of elements you want inn the array\n";
    std::cin>>n;
    for (int i = 0; i <n; i++)
    {
        int l;
        std::cout<<"Enter element"<<i+1<<std::endl;
        std::cin>>l;
        arr.push_back(l);
    }
    int k;
    std::cout<<"Enter the number you want to find \n";
    std::cin>>k;
    std::cout<<linear(arr,k);
    return 0;
}