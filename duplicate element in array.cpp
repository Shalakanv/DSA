#include <iostream>
using namespace std;

int main() {
  int arr[10]={1,2,3,4,5,6,7,8,2,9};
  int ans=0;
  for(int i=0;i<10;i++)
    {
      ans=ans^arr[i];
    }

  for(int i=1;i<10;i++)
    {
      ans=ans^i;
    }
  cout<<"Duplicate element in array is:"<<ans;
}