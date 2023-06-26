#include <iostream>
using namespace std;

bool linear_search(int arr[],int n,int key)
{
  for(int i=0;i<n;i++)
    {
      if(arr[i]==key)
      {
        return 1;
      }
    }
  return 0;
}

int main() {
  int arr[10];
  int size;
  int element;
  cout<<"Enter array size:"<<endl;
  cin>>size;

  cout<<"Enter Array elements:"<<endl;
  for(int i=0;i<size;i++)
    {
      cin>>arr[i];
    }
  cout<<"Enter key which you want to search "<<endl;
  cin>>element;
  bool found=linear_search(arr,size,element);

  if(found)
  {
    cout<<"Key is present"<<endl;
  }
  else{
    cout<<"Key is absent"<<endl;
  }
}