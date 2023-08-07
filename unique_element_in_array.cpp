#include <iostream>
using namespace std;

int main() {
  int arr[9]={1,2,3,4,5,5,3,2,1};
  int ans=0;
  for(int i=0;i<9;i++)
  {
    ans=ans^arr[i];       // In XOR, ele^ele=0 and ele^0=ele
  }
  cout<<"Unique element in array is:"<<ans;
}