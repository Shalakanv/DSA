#include <iostream>
using namespace std;

void reverse_array(int arr[],int size)
{
  int start=0;
  int end=size-1;
  
  while(start<=end)
    {
      swap(arr[start],arr[end]);
      start++;
      end--;
    }
  
}

void print_array(int arr[],int size)
{
  for(int i=0;i<size;i++)
    {
      cout<<arr[i]<<" ";
    }
  cout<<endl;
}

int main() {
  
  int arr[6]={1,6,9,3,5,0};
  int brr[5]={90,35,56,34,23};

  reverse_array(arr,6);
  reverse_array(brr,5);

  print_array(arr,6);
  print_array(brr,5);
}
