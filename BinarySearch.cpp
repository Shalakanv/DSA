#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key)
{
    int s=0,e=n-1,mid;
    mid=s+e/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else
        {
            if(arr[mid]<key)
            {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+e/2;
        }
    }
    return -1;
}

int main()
{
    int array[3]={21,34,54};

    int index=BinarySearch(array,3,34);
    
    cout<<"Key's index is:"<<index;

    return 0;

}