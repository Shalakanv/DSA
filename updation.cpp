#include <iostream>
using namespace std;

// update function 
void update(int arra[],int n)
{
   arra[0]=50;
  cout<<"Before updation"<<endl;
  for(int i=0;i<n;i++)
    {
      cout<<arra[i]<<" ";
    }
  cout<<"\nAfter updation"<<endl;
}

int main()
{
  int arra[4]={0,10,20,30};
  update(arra,4); // In update function we are not actually passing the whole array,we are passing the address of the first location  

  for(int i=0;i<4;i++)
    {
      cout<<arra[i]<<" ";
    }
}