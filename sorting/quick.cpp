#include<iostream>
#include<vector>
int index(std::vector<int> &arr,int low, int high){
    int pivot=arr[low];
    int i=low,j=high;
    while (i<j)
    {
        while (pivot>=arr[i]&&i<=high)
        {
            i++;
        }
        while (pivot<=arr[j]&&j>=low)
        {
            j--;
        }
        if (i<j)
        {
            std::swap(arr[i],arr[j]);
        }
        
    }
    std::swap(arr[low],arr[j]);
    return j;
}
void quicksort(std::vector<int> &arr,int low ,int high){
    if (low<high)
    {
       int k= index(arr,low,high);
       quicksort(arr,low,k-1);
       quicksort(arr,k+1,high);
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
    quicksort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
       std::cout<<arr[i]<<"\n";
    }
    return 0; 
}