#include<iostream>
#include<vector>
void selectionsort(std::vector<int> &arr,int n){
    for (int i = 0; i <n; i++)
    {
       int min=i;
       for (int j = i; j < n; j++)
       {
        if (arr[j]<=arr[min])
        {
            min=j;
        }
        
       }

       std::swap(arr[i], arr[min]);
    }
    
}
int main(){
    int n;
    std::vector<int> arr;
    std::cout<<"Enter number of terms\n";
    std::cin>>n;
    for (int i = 0; i <n; i++)
    {
        std::cout<<"element "<<i+1<<" :\n";
        int l;
        std::cin>>l;
        arr.push_back(l);
    }
    selectionsort(arr,n);
    for (int i = 0; i < n; i++)
    {
       std::cout<<arr[i]<<"\n";
    }
    
    
}