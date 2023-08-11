// 4) Find pivot element in the array.

#include<iostream>
using namespace std;

int findPivot(int array[],int size)               //      .
{                                              //     .      <----- arr[mid]>=arr[0]
    int s=0,e=size-1,mid;                    //   . arr[0]
    mid=s+(e-s)/2;                             //
                                                //                .  arr[e]
    while(s<e)                                    //           .
    {                                               //     . <---- pivot element
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

int main()
{
    int arr[6]={6,8,10,1,4,5};

    int pivot=findPivot(arr,6);

    cout<<"Pivot element's index is:"<<pivot;
}