#include <iostream>
using namespace std;

void print_array(int arr[],int n)
{
  for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
  cout<<endl;
}

void swap_alternate(int arr[],int size)
{
  for(int i=0;i<size;i+=2)
    {
      if(i+1 < size)
      {
        swap(arr[i],arr[i+1]);   // copy (i+1)th element in (i)th location
      }
    }
}

int main() {
  int even[8]={1,2,4,7,9,3,0,13};   // array of even size
  int odd[7]={22,33,55,67,90,75,42};  // array of odd size

  swap_alternate(even,8);
  cout<<"After swapping array of even size look like:"<<endl;
  print_array(even,8);

  cout<<"After swapping array of odd size look like:"<<endl;
  swap_alternate(odd,7);
  print_array(odd,7);
}