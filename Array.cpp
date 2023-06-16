//Array-> 1)used to store variables of same data type.
//        2)we can access its element using index

#include <iostream>
using namespace std;

int main() {
  int i;
  int array1[5]={1,2,3,4,5};
  for(i=0;i<5;i++)
    {
      int result=array1[i];
      cout<<"Value is "<<result<<endl;
    }
  i++;
}