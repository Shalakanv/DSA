#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int sortArray(int arr[],int n)
{
    int left=0,right=n-1;

    while(left <= right)
    {
        while(arr[left]==0 && left<=right)
        {
            left++;
        }
        while(arr[right]==1 && left<=right)
        {
            right--;
        }
        if(arr[left]==1 && arr[right]==0 && left<=right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    int arr[7]={1,0,0,1,1,0,1};

    sortArray(arr,7);
    printArray(arr,7);


}