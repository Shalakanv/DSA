#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter value of n:"<<endl;
  cin>>n;

  int i=0;
  int sum=0;

  // while(i<n)       //we can take i<=n also
  //   {
  //     i=i+2;
  //     sum=sum+i;
  //   }
  // cout<<"Sum of Even No is: "<<sum<<endl;

  while(i<n)
    {
      i=i+1;
      sum=sum+i;
    }
  cout<<"Sum of odd no is: "<< sum <<endl;
}