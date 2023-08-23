#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n)
{
    for(int i=1;i<=n-1;i++)  // Rounds
    {
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;  //when else part get executed that means jth element is smaller than temp that time we store that temp value in j+1 th location.
    }
}

// while loop
// void InsertionSort(int arr[], int n) {
//     int i = 1;
//     while (i <= n - 1) {
//         int temp = arr[i];
//         int j = i - 1;
//         while (j >= 0) {
//             if (arr[j] > temp) {
//                 arr[j + 1] = arr[j];
//             } else {
//                 break;
//             }
//             j--;
//         }
//         arr[j + 1] = temp;
//         i++;
//     }
// }

int main()
{
    int a[10];
    int size;
    cout<<"Enter array size:";
    cin>>size;

    cout<<"Enetr array elements:";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }

    InsertionSort(a,size);

    cout<<"Sorted Array is:";
    for(int s=0;s<size;s++)
    {
        cout<<a[s]<<' ';
    }
}