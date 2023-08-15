#include<iostream>
using namespace std;

void selectionSort(int array[],int n)
{
    for(int i=0;i<n-1;i++)  // i=0 -----> i=1 -----> i=2 ----> i=3
    {
        int minimum=i;  // minimum=0 -----> minimum=1 -----> minimum=2
        for(int j=i+1;j<n;j++) // j=0+1=1 1<5 2<5 3<5 4<5 ----> j=2 2<5 3<5 4<5 ---> j=3 3<5 4<5 ----> j=4 4<5
        {
            if(array[j]<array[minimum])  // 2<6(true) 8<2 4<2 10<2 ----> 8<6 4<6 10<4(true) ---> 6<8(true) 10<6 ---> 10<8
            {
                minimum=j; // minimum=1 ----> minimum=3 -----> minimum=3 -----> minimum=3
            }
        }
        swap(array[minimum],array[i]);  // swap(2,6) ---> swap(4,6) ---> swap(6,8) -----> swap(8,8)
    }
}
int main()
{
    int size,arr[10];
    cout<<"Enter size of array:"<<endl;
    cin>>size;  // 5
    cout<<"Enter Array elements:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];   // 6 2 8 4 10
    }

    selectionSort(arr,size);

    cout<<"Sorted Array:"<<endl;
    for(int s=0;s<size;s++)
    {
        cout<<arr[s]<<endl;
    }
}

// A sorting algorithm is said to be stable if two objects with equal keys appear in the same order in sorted output as they appear in the input data set

//for explaination ------> https://ds2-iiith.vlabs.ac.in/exp/selection-sort/analysis/stability-of-selection-sort.html#:~:text=Yes%2C%20Selection%20Sort%20is%20a,relative%20ordering%20between%20equal%20elements.

// Selection sort is not a stable sorting algo except small element.