//1) First and last position of an element in sorted array

// #include<iostream>
// using namespace std;

// int FirstOccurance(int array[],int n,int key)
// {
//     int s=0,e=n-1;
//     int ans=-1;

//     while(s<=e)
//     {
//         int mid=s+(e-s)/2;
//         if(array[mid]==key)
//         {
//             ans=mid;
//             e=mid-1;
//         }
//         else if(array[mid]>key)
//         {
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return ans;
// }
// int LastOccurance(int array[],int n,int key)
// {
//     int s=0,e=n-1;
//     int ans=-1;

//     while(s<=e)
//     {
//         int mid=s+(e-s)/2;
//         if(array[mid]==key)
//         {
//             ans=mid;
//             s=mid+1;
//         }
//         else if(array[mid]>key)
//         {
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int size,element;
//     int arr[10];
//     cout<<"Enter size of array:"<<endl;
//     cin>>size;
//     cout<<"Enter Array Elements:"<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<"Enter element whose occurance we wish to find:";
//     cin>>element;

//     cout<<"First Occurance of key is at index:"<<FirstOccurance(arr,size,element)<<endl;
//     cout<<"Last Occurance of key is at index:"<<LastOccurance(arr,size,element);
// }

//********************************************************************************************

// 2)Total number of occurance of particular element in an array

// #include<iostream>
// using namespace std;

// int FirstOccurance(int array[],int n,int key)
// {
//     int s=0,e=n-1;
//     int ans=-1;

//     while(s<=e)
//     {
//         int mid=s+(e-s)/2;
//         if(array[mid]==key)
//         {
//             ans=mid;
//             e=mid-1;
//         }
//         else if(array[mid]>key)
//         {
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//     }
//     return ans;
// }
// int LastOccurance(int array[],int n,int key)
// {
//     int s=0,e=n-1;
//     int ans=-1;

//     while(s<=e)
//     {
//         int mid=s+(e-s)/2;
//         if(array[mid]==key)
//         {
//             ans=mid;
//             s=mid+1;
//         }
//         else if(array[mid]>key)
//         {
//             s=mid+1;
//         }
//         else{
//             e=mid-1;
//         }
//     }
//     return ans;
// }
// int TotalOccurance(int num1,int num2)
// {
//     int total=(num2-num1)+1;
// }
// int main()
// {
//     int size,element;
//     int arr[10];
//     cout<<"Enter size of array:"<<endl;
//     cin>>size;
//     cout<<"Enter Array Elements:"<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }

//     cout<<"Enter element whose occurance we wish to find:";
//     cin>>element;

//     int first=FirstOccurance(arr,size,element);
//     cout<<"First Occurance of key is at index:"<<first<<endl;

//     int last=LastOccurance(arr,size,element);
//     cout<<"Last Occurance of key is at index:"<<last<<endl;

//     int finalans=TotalOccurance(first,last);
//     cout<<"Total number of occurance of key element is:"<<finalans;
// }

//***************************************************************************************

// 3) Find peak element in mountain array

//             7
//         6       2         <-----  Mountain array
//     5               1
// 4                       0

#include<iostream>
using namespace std;

int peakElement(int array[],int n)
{
    int s=0,e=n-1,mid;
    mid=s+(e-s)/2;
    
    while(s<e)   // If we took mid statement inside while then at the time of 2nd iteration only s<e condition get false that's why we wrote mid statement outside while.
    {
        if(array[mid]<array[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
         mid=s+(e-s)/2;
    }
    return array[mid];
}

int main()
{
    int size;
    int arr[10];
    cout<<"Enter size of array:"<<endl;
    cin>>size;
    cout<<"Enter Array Elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int peak=peakElement(arr,size);

    cout<<"Peak element in mountain array is:"<<peak;
}