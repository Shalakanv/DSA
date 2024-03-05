#include<iostream>
using namespace std;

void merge(int *arr,int s,int e)
{
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = s;
    for(int i=0;i<len1;i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

     mainArrayIndex = mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }

    while(index1 < len1){
        arr[mainArrayIndex++]=first[index1++];
    }

    while(index1 < len1){
        arr[mainArrayIndex++]=second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int *arr,int s,int e)
{
    //base case
    if(s>=e)
    {
        return;
    }

    int mid=(s+e)/2;

    //sort left array
    mergeSort(arr,s,mid);

    //sort right array
    mergeSort(arr,mid+1,e);

    // merge 2 arrays
    merge(arr,s,e);
}

int main()
{
    int arr[5]={2,5,1,6,9};
    int n= 5;

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }cout<<endl;
}

/*   Dry Run

Initial Array: [2, 5, 1, 6, 9]

After Initial Call to mergeSort(arr, 0, 4):

Array: [2, 5, 1, 6, 9]
After Divide Step:

Left Half (mergeSort(arr, 0, 2)): [2, 5, 1]
Right Half (mergeSort(arr, 3, 4)): [6, 9]
After Recursive Call for Left Half:

Left Half of Left Half (mergeSort(arr, 0, 1)): [2, 5]
Right Half of Left Half (mergeSort(arr, 2, 2)): [1]
After Recursive Call for Right Half (of Left Half):

Array: [2, 5, 1] (No change as right half has only one element)
After Merge for Left Half:

Merged Left Half: [1, 2, 5]
After Recursive Call for Right Half:

Array: [6, 9] (No change as it's already sorted)
After Merge for Right Half:

Merged Right Half: [6, 9]
After Final Merge:

Merged Array: [1, 2, 5, 6, 9]

*/