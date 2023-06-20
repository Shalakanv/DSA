#include <iostream>
#include <climits>
//#include <limits.h>
// To use INT_MAX and INT_MIN micros it is advisable to include <climits> or <limits.h> header file
using namespace std;

int getMin(int num[],int n)
{
  int i;
  int min= INT_MAX;
  for(i=0;i<n;i++)
    {
      if(num[i]<min)
      {
        min=num[i];
      }
    }
  return min;
}

int getMax(int num[],int n)
{
  int i;
  int max= INT_MIN;
  for(i=0;i<n;i++)
    {
      if(num[i]>max)
      {
        max=num[i];
      }
    }
  return max;
}

int main()
{
  int size;
  cout<<"Enter array size: ";
  cin>>size;
  int num[100];

  cout<<"Enter array elemets: ";
  for(int i=0;i<size;i++)
    {
      cin>>num[i];
    }

  cout<<"Maximum number is: "<<getMax(num,size)<<endl;
  cout<<"Minimum number is: "<<getMin(num,size);
}