#include <iostream>
#include <climits>
//#include <limits.h>
// To use INT_MAX and INT_MIN micros it is advisable to include <climits> or <limits.h> header file
using namespace std;

// Searching maximum and minimum number in array with the help of predefined function max and min
int getMin(int num[],int n)
{
  int i;
  int minimum= INT_MAX;
  for(i=0;i<n;i++)
    {
      minimum=min(minimum,num[i]);
      // if(num[i]<min)
      // {
      //   min=num[i];
      // }
    }
  return minimum;
}

int getMax(int num[],int n)
{
  int i;
  int maximum= INT_MIN;
  for(i=0;i<n;i++)
    {
      maximum=max(maximum,num[i]);
      // if(num[i]>max)
      // {
      //   max=num[i];
      // }
    }
  return maximum;
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

  cout<<"Maximum number is: "<<getMax(num,size)<<endl; //num means we are not passing whole array to the function we are just passing address of first index to the function which get stored in num[]
  cout<<"Minimum number is: "<<getMin(num,size);
}



