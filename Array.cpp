//Array-> 1)used to store variables of same data type.
//        2)we can access its element using index

#include <iostream>
using namespace std;

// int main() {
//   int i;
//   int array1[5]={1,2,3,4,5};
//   for(i=0;i<5;i++)
//     {
//       int result=array1[i];
//       cout<<"Value is "<<result<<endl;
//     }
//   i++;
// }

void print_array(int array1[],int size)
{
  cout<<"Printing array"<<endl;
  for(int i=0;i<size;i++)
    {
      cout<<array1[i]<<" "<<endl;
    }
  cout<<"Printing done"<<endl;
  return;
}

int main() 
{
  int array1[5]={1,2,3,4,5};
  print_array(array1,5);
  cout<<"Value at 4th index is "<<array1[4];
}

//To find length of array

// int main()
// {
//   int arr[5]={11,12,13,14,15};
//   int length=sizeof(arr)/sizeof(arr[0]);
//   cout<<"Length of array is "<<length;
// }