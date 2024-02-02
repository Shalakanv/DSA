#include<iostream>
#include<vector>
using namespace std;

//Wave print
vector<int> wavePrint(vector<vector<int>>arr,int nRows,int mCols)
{
    vector<int> ans;

    for(int col=0;col<mCols;col++)
    {
        if(col&1){
            for(int row=nRows-1;row>=0;row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            for(int row=0;row<nRows;row++)
            {
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

//Spiral print

vector<int> spiralOrder(vector<vector<int>>& matrix, int row,int col)
{
    vector<int> ans;

    int count=0;
    int total=row*col;

    //index initialization
    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=col-1;

    while(count < total)
    {
        //printing starting row
        for(int index=startingCol;count<total && index<=endingCol;index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        //printing ending col
        for(int index=startingRow;count<total && index<=endingRow;index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        //printing ending row
        for(int index=endingCol;count<total && index>=startingCol;index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        //printing starting col
        for(int index=endingRow;count<total && index>=startingRow;index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

//Rotation of 2D array by 90 degree
vector<int> rotation(vector<vector<int>>& matrix, int row,int col)
{
    vector<int> ans;
    int i=0;
    while(i<col)
    {
        for(int s=row-1;s>=0;s--)
        {
            ans.push_back(matrix[s][i]);
        }
        i++;
    }
    return ans;
}

//Sort 2D array when elements are sorted row wise.
bool Search2Darray(vector<vector<int>>& matrix, int row,int col)
{
    int target;
    cout<<"\nEnter element which you want to search:";
    cin>>target;
    int start=0;
    int end=row*col-1;
    int mid= start+(end-start)/2;

    while(start<=end)
    {
        int element=matrix[mid/col][mid%col];

        if(element==target)
        {
            return 1;
        }
        if(element > target)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid= start+(end-start)/2;
    }
    return 0;
}

//Sort 2D array when elements are sorted row wise and column wise
//Input array--- 
//1 4 7 11 15
//2 5 8 12 19
bool Searcharray(vector<vector<int>>& matrix, int row,int col)
{
    int rowIndex=0;
    int colIndex=col-1;
    int target;

    cout<<"Enter element which you want to search:"<<endl;
    cin>>target;

    while(rowIndex < row && colIndex>=0)
    {
        int element=matrix[rowIndex][colIndex];

        if(element==target)
        {
            return 1;
        }
        if(element < target)
        {
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return 0;

}

int main()
{
    int row,col;
    cout<<"Enter the number of rows:";
    cin>>row;

    cout<<"Enter the number of columns:";
    cin>>col;

    //Declare a 2D vector
    vector<vector<int>> myVector(row, vector<int>(col));

    //Input values into the vector
    cout<<"Enter the elements of the 2D vevtor:"<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"Enter elements at position ["<< i << "]["<<j<<"]:";
            cin>> myVector[i][j];
        }
    }

    cout<<"The entered 2D vector is:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout<<myVector[i][j] << " ";
        }
        cout<<endl;
    }

    vector<int> result1=wavePrint(myVector,row,col);
    cout<<"Wave printed vector is:"<<endl;
    for(int val:result1){
        cout<<val<<" ";
    }
    
    vector<int> result2=spiralOrder(myVector,row,col);
    cout<<"\nSpiral printed vector is:"<<endl;
    for(int val:result2){
        cout<<val<<" ";
    }

    vector<int> result3=rotation(myVector,row,col);
    cout<<"\n90 degree rotated vector is:"<<endl;
    for(int val:result3){
        cout<<val<<" ";
    }

    bool result=Search2Darray(myVector,row,col);
    if(result)
    {
        cout<<"Number found"<<endl;
    }
    else{
        cout << "Number not found" << endl;
    }

    bool resultt=Searcharray(myVector,row,col);
    if(resultt)
    {
        cout<<"Number found"<<endl;
    }
    else{
        cout << "Number not found" << endl;
    }
    return 0;
}

