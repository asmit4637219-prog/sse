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
void search(std::vector<int> &new_arr,int target){
    sort(new_arr,0,new_arr.size()-1);
    if(new_arr[new_arr.size()/2]>=target){
        for (int i = 0; i <=new_arr.size()/2; i++)
        {
            if (new_arr[i]==target)
            {
                std::cout<<i<<std::endl;
                break;  
            }
        }

    }
     else if(new_arr[new_arr.size()/2]<target){
        for (int i = new_arr.size()/2+1; i <=new_arr.size()-1; i++)
        {
            if (new_arr[i]==target)
            {
                std::cout<<i<<std::endl;
            }
                else{
            std::cout<<-1<<std::endl;
        }
        }
    }

        
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
    search(new_arr,target);
    return 0;
}