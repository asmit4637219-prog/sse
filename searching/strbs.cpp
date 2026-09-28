#include<iostream>
#include<vector>
void merg(std::vector<int> &new_arr,int low,int high,int mid){
    int left=low;
    int right=mid+1;
    std::vector<int> temp;
    while (left<=mid&&right<=high)
    {
        if(new_arr[left]<=new_arr[right]){
            temp.push_back(new_arr[left]);
            left++;
        }
        else{
            temp.push_back(new_arr[right]);
            right++;
        }
    }
    while (left<=mid)
    {
        temp.push_back(new_arr[left]);
        left++;
    }
    while (right<=high)
    {
        temp.push_back(new_arr[right]);
        right++;
    }
    for (int i =low; i <=high; i++)
    {
        new_arr[i]=temp[i-low];
    }  
    
}
void sort(std::vector<int> &new_arr,int low,int high){
    int mid= (low +high)/2;
    if (low==high)
    {
        return;
    }
    
    sort(new_arr,low,mid);
    sort(new_arr,mid+1,high);
    merg(new_arr,low,high,mid);
}
int search(std::vector<int> &new_arr,int n,int target){
    sort(new_arr,0,new_arr.size()-1);
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid=(high+low)/2;
        if(new_arr[mid]==target){
            return mid;
        }
        else if (new_arr[mid]>target)
        {
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}
int main(){
     int n;
    std::vector<int> new_arr;
    std::cout<<"Enter the number of element you want to add\n";
    std::cin>>n;
    for (int i = 0; i <n; i++)
    {
        std::cout<<"Element no "<<i+1<<std::endl;
        int k;
        std::cin>>k;
        new_arr.push_back(k);
    }
    std::cout<<"Enter the number you want to search\n";
    int target;
    std::cin>>target;
    std::cout<<search(new_arr,n,target);
    return 0;
}