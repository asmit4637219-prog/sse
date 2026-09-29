#include<iostream>
#include<vector>
void inrtsort(std::vector<int> &arr,int n){
    for (int i = 0; i <n; i++)
    {
        int j=i;
        while (j>0&&arr[j-1]>arr[j])
        {
            int k= arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=k;
            j--;
        }
        
        
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
    inrtsort(arr,n);
    for (int i = 0; i < n; i++)
    {
       std::cout<<arr[i]<<"\n";
    }
    
    
}