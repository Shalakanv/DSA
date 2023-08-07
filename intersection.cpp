#include <iostream>
using namespace std;
// Intersection of array
// int main() 
// {
//   int arr1[6]={1,2,3,4,5,6};
//   int arr2[4]={1,2,7,8};

//   for(int i=0;i<6;i++)
//     {
//       int element=arr1[i];

//       for(int j=0;j<4;j++)
//         {
//           if(element<arr2[j])
//           {
//             break;
//           }
//           if(element == arr2[j])
//           {
//             cout<<element<<" ";
//             arr2[j]=-1;
//             break;
//           }
//       }
//     }
// }

// 2 pointer approach (another approach for this question)

int main()
{
  int arr1[5]={1,2,3,4,5};
  int arr2[2]={2,3};
  int i=0,j=0;
  
  while(i<5 && j<2)
    {
      if(arr1[i]==arr2[j])
      {
        cout<<arr1[i]<<" ";
        i++;
        j++;
      }
      else if(arr1[i]<arr2[j])
      {
        i++;
      }
      else{
        j++;
      }
      
    }
}