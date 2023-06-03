#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the value of n:"<<endl;
  cin>>n;

  if(n>=65 && n<=90)
  {
    cout<<"This is Uppercase"<<endl;
  }
  else if(n>=97 && n<=122)
  {
    cout<<"This is lowercase"<<endl;
  }
  else
  {
    cout<<"This is numeric"<<endl;
  }
}