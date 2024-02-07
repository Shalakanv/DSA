#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;

    int col;
    cin>>col;

    int** arr=new int*[row];


    for(int i=0;i<row;i++)
    {
        arr[i]=new int[col];
    }


    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // releasing memory
    for(int i=0;i<row;i++)
    {
        delete []arr[i];
    }

    delete []arr;














    /*
    int n;
    cin>>n;
    int** arr=new int*[n];

    // creating 2D array
    for(int i=0;i<n;i++)
    {
        arr[i]=new int[n];
    }

    //taking input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    // pinting output
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    */
}