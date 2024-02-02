using namespace std;
#include<iostream>
#include <climits>

// To search element in array
bool ischeck(int arr[][4],int tar,int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==tar)
            {
                return 1;
            }
        }
    }
    return 0;
}

//To print row wise sum of elements 

void printSum(int arr[][4],int row,int col)
{
    cout<<"\nPrinting sum:"<<endl;
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}


//To print column wise sum of elements 
/*
void printSum(int arr[][4],int row,int col)
{
    cout<<"Printing sum:"<<endl;
    for(int i=0;i<col;i++)
    {
        int sum=0;
        for(int j=0;j<row;j++)
        {
            sum += arr[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
*/

int largestRowSum(int arr[][4],int row,int col)
{
    int maxi=INT_MIN;
    int rowIndex= -1;

    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum += arr[i][j];
        }

        if(sum > maxi)
        {
            maxi=sum;
            rowIndex=row;
        }
    }
    cout<<"The maximum sum is:"<<maxi<<endl;
    return rowIndex;
}

//**********************Print elements in wave*****************




int main()
{
    int arr[3][4];
    /*
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};row wise

    int arr[3][4]={{1,11,11,1111},{2,22,222,2222},{3,33,333,3333}};

    */

    cout<<"Enter 2D array element:"<<endl;
    //row wise input
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }

    //column wise input
    /* for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[j][i];
        }
    }
    */

    cout<<"Your 2D array is:"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Enter element which you want to search:"<<endl;
    int target;
    cin>>target;

    if(ischeck(arr,target,3,4)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found";
    }

    printSum(arr,3,4);

    int ans= largestRowSum(arr,3,4);
    cout<<"Ans is:"<<ans<<endl;

    

}