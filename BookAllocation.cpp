#include<iostream>
using namespace std;

// 7) Book allocation problem
// Detail Question:=  This code is an implementation of a binary search algorithm to solve a problem related to allocating books to students in a fair and efficient manner. The problem is known as the "Allocate Books" problem, and the goal is to determine the minimum number of pages that need to be allocated to each student while ensuring that each student receives contiguous pages from the given array of book pages.

// bool isPossible(int arrays[],int n,int m,int middle)
// {
//     int studentCount=1;
//     int pageSum=0;

//     for(int i=0;i<n;i++)
//     {
//         if(pageSum + arrays[i] <= middle)
//         {
//             pageSum += arrays[i];
//         }
//         else{
//             studentCount++;
//             if( studentCount >m || arrays[i]>middle)
//             {
//                 return false;
//             }
//             pageSum = arrays[i];   // 30(need one extra student) 40  40 30(again need extra student) 30 40  40
//         }
//     }
//     return true;
// }

// int allocateBooks(int arr[],int totalb,int totals)
// {
//     int s=0;
//     int sum=0;
//     for(int i=0;i<totalb;i++)
//     {
//     sum += arr[i];
//     }
//     int e=sum;
//     int ans=-1;
//     int mid=s+(e-s)/2;

//     while(s<=e)
//     {
//         if(isPossible(arr,totalb,totals,mid))
//         {
//             ans=mid;
//             e=mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }

// int main()
// {
//     int n=4;int m=2;
//     int array[4]={10,20,30,40};

//     int finalAns=allocateBooks(array,4,2);

//     cout<<"Answer is:"<<finalAns;

// }

//8) Painters Partition Problem

bool ispossible(int array[],int nb,int mw,int middle)
{
    int workerCount=0;
    int boardSum=0;

    for(int i=0;i<nb;i++)
    {
        if(boardSum + array[i]<=middle)
        {
            boardSum += array[i];
        }
        else
        {
            workerCount++;
            if(workerCount > mw || array[i]>middle)
            {
                return false;
            }
            boardSum += array[i];
        }
    }
    return true;
}

int allocatePartition(int arr[],int totalb,int totalw)
{
    int s=0,mid;
    int sum=0;
    for(int i=0;i<totalb;i++)
    {
        sum += arr[i];
    }
    int e=sum;
    int ans=-1;
    mid=s+(e-s)/2;

    while(s<=e)
    {
        if(ispossible(arr,totalb,totalw,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int n=4,m=2;
    int a[4]={5,5,5,5};

    int finalAns=allocatePartition(a,4,2);

    cout<<"Final Answer is:"<<finalAns;

}