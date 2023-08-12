#include<iostream>
using namespace std;

int findPivot(int array[],int size)             
{                                             
    int s=0,e=size-1,mid;                   
    mid=s+(e-s)/2;                          
                
    while(s<e)                                   
    {                                              
        if(array[mid]>=array[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return e; 
}

int BinarySearch(int arr[],int n,int sk,int ek,int Key)
{
    int mid;
    mid=sk+(ek-sk)/2;  // mid=s+(e-s)/2  -->  if numbers are out of integer range
    while(sk<=ek)
    {
        if(arr[mid]==Key)
        {
            return mid;
        }
        else
        {
            if(arr[mid]<Key)
            {
                sk=mid+1;
            }
            else{
                ek=mid-1;
            }
            mid=sk+ek/2;
        }
    }
    return -1;
}
int findindex(int array[],int size,int key)
{
    int pivot=findPivot(array,6);
     if(key>=array[pivot] && key<=array[size-1])
    {
        return BinarySearch(array,6,pivot,size-1,key);
    }
    else{
        return BinarySearch(array,6,0,pivot-1,key);
    }
}

int main()
{
    int arr[6]={7,9,1,2,3,4};
    int element;
    cout<<"Enter element which you want to find:"<<endl;
    cin>>element;

    int index=findindex(arr,6,element);

    if(index != -1)
    {
        cout<<"Element is found at index:"<<index<<endl;
    }
    else{
        cout<<"Element not found";
    }
}