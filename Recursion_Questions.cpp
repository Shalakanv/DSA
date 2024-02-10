#include<iostream>
using namespace std;

int getSum(int *arr,int n)
{
    // base case
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return arr[0];
    }

    int remainingPart = getSum(arr+1,n-1);
    int sum = arr[0]+remainingPart;
    return sum;
}
/*
bool isSorted(int arr[],int n)
{
    // base case
    if(n == 0 || n == 1)
    {
        return true;
    }

    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        int remainingPart = isSorted(arr+1,n-1);
        return remainingPart;
    }
}
*/
int main()
{
    int arr[5]={2,4,9,8,9};
    int size=5;

    /*

    bool ans = isSorted(arr,size);

    if(ans)
    {
        cout<<"Your array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }

    */

   int sum = getSum(arr,size);
   cout<<"Your ans is "<<sum<<endl;
}