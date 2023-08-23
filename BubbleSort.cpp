#include<iostream>
using namespace std;

void BubbleSort(int array[],int n)
{
    bool swapped=false;
    for(int i=0;i<n-1;i++)  // for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++) // for(int j=0;j<n-i;j++)
        {
            if(array[j]>array[j+1])
            {
                swap(array[j],array[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            // already sorted
            break;
        }
    }
}

int main()
{
    int size;
    int arr[10];
    cout<<"Enter size of array:";
    cin>>size;

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    BubbleSort(arr,size);

    cout<<"Sorted Array is:"<<endl;
    for(int s=0;s<size;s++)
    {
        cout<<arr[s]<<" ";
    }

}