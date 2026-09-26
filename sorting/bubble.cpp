#include <iostream>
void bubble(int arr[], int n){
    for (int i = n-1; i >=0; i--)
    {
        int max=i;
        for (int j = 0; j<=i; j++)
        {
            if (arr[max]<=arr[j])
            {
                max=j;
            }
            int temp=arr[max];
            arr[max]=arr[i];
            arr[i]=temp; 
        }

    }
        for (int i = 0; i < n; i++)
    {
        std::cout<<arr[i]<<"\n";
    }
}
int main(){
    int n;
    std::cout<<"Enter the number of elements \n";
    std::cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        std::cout<<"Enter no"<<i+1<<"\n";
        std::cin>>arr[i];
    }
    bubble(arr,n);
    return 0;
    
}