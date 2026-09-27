#include<iostream>
#include<vector>
void merge(std::vector<int> &arr,int low, int mid,int high);
void ms(std::vector<int> &arr,int low,int high){
    if (low==high)
    {
        return;
    }
    int mid=(high+low)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
    
}
void merge(std::vector<int> &arr,int low, int mid,int high){
    int right=low;
    int left= mid+1;
    std::vector<int> temp;
    while(right<=mid&&left<=high){
        if(arr[right]<=arr[left]){
            temp.push_back(arr[right]);
            right++;
        }
        else{
           temp.push_back(arr[left]);
            left++; 
        }
    }
    while(right<=mid){
        temp.push_back(arr[right]);
        right++;
    }
    while(left<=high){
        temp.push_back(arr[left]);
        left++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }

}
int main(){
    std::vector<int> arr;
    std::cout<<"Enter the numbers you want to add in array\n";
    int n;
    std::cin>>n;
    for (int i = 0; i <n; i++)
    {
        std::cout<<"enter element"<<i+1<<std::endl;
        int k;
        std::cin>>k;
        arr.push_back(k);
    }
    ms(arr,0,n-1);
    
    for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<"\n";
    }
    
    
    return 0;
}