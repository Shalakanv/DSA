// Home-Work question
#include <iostream>
using namespace std;

void addition(int array[],int n)
{
  int sum=0;
  for(int j=0;j<n;j++)
    {
      sum=sum+array[j];
    }
  cout<<"Addition of array element is "<<sum;
}

int main() 
{
  int size;
  cout<<"Enter array size:"<<endl;
  cin>>size;

  int array[10];
  cout<<"Enter array elements:"<<endl;
  for(int i=0;i<size;i++)
    {
      cin>>array[i];
    }
  addition(array,size);
}