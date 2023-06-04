#include <iostream>
using namespace std;

// ***************1st pattern***********
// int main()
// {
//   int n;
//   cout<<"Enter value for n:"<<endl;
//   cin>>n;
//   int i,j;
//   i=1;

//   while(i<=n)             //  1234....n
//     {                    //   1234....n
//        j=1;              //   1234....n
//     {                    //   1234....n
//       while(j<=n)
//         {
//           cout<<j;
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

// ******************2nd pattern************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:"<<endl;
//   cin>>n;

//   int i=1;

//   while(i<=n)                  //        123..n
//     {                          //        123..n
//       int j=1;                 //        123..n
//       while(j<=n)
//         {
//           cout<<i;
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

// ****************3rd pattern******************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:"<<endl;
//   cin>>n;

//   int i=1;
//    while(i<=n)
//      {
//        int j=1;
//        while(j<=n)
//          {
//            cout<<n-j+1;
//            j=j+1;
//          }
//        cout<<endl;
//        i=i+1;
//      }
// }

// ***********************4th pattern****************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:"<<endl;
//   cin>>n;

//   int i=1;
//   int count=1;
//   while(i<=n)                        // 12345
//     {                               //  678910....
//       int j=1;
//       while(j<=n)
//         {
//           cout<<count<<" ";
//           count=count+1;
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

// ******************5th pattern******************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:"<<endl;
//   cin>>n;

//   int i=1;                    //  *
//   while(i<=n)                //   * *
//     {                       //    * * *
//       int j=1;
//       while(j<=i)
//         {
//           cout<<"*";
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

// ****************6th pattern********************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:"<<endl;
//   cin>>n;

//   int i=1;
//   while(i<=n)
//     {
//       int j=1;
//       while(j<=i)
//         {
//           cout<<i;
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

// ***************7th pattern*******************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:"<<endl;
//   cin>>n;

//   int i=1;
//   int count=1;
//   while(i<=n)
//     {
//       int j=1;
//       while(j<=i)
//         {
//           cout<<count<<" ";
//           count=count+1;
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

// ********************8th pattern*******************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:";
//   cin>>n;
//   int i=1;
//   while(i<=n)
//     {
//       int value=i;
//       int j=1;
//       while(j<=i)
//         {
//           cout<<value;
//           value=value+1;
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

// ********************9th pattern****************
// int main()
// {
//   int n;
//   cout<<"Enter value of n:";
//   cin>>n;

//   int i=1;
//   while(i<=n)
//     {
//       int j=1;
//       while(j<=i)
//         {
//           cout<<i-j+1<<" ";
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }

// }

//******************10th pattern**************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:";
//   cin>>n;

//   int i=1;
//   while(i<=n)             //  AAAAA
//     {                    //   BBBBB
//       int j=1;          //    CCCCC
//                         //    DDDDD
//       while(j<=n)
//         {
//           char ch='A'+i-1;
//           cout<<ch;
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

// *****************11th pattern****************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:";
//   cin>>n;

//   int i=1;
//   while(i<=n)             //  AAAAA
//     {                    //   BBBBB
//       int j=1;          //    CCCCC
//                         //    DDDDD
//       while(j<=n)
//         {
//           char ch='A'+j-1;
//           cout<<ch;
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

//***************12th pattern***************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:";
//   cin>>n;

//   int i=1;
//   char value='A';
//   while(i<=n)
//     {
//       int j=1;
//       while(j<=n)
//         {
//           cout<<value;
//           value=value+1;
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

//""""""""""""""""""13th pattern********************
// int main() 
// {
//   int n;
//   cout << "Enter value for n:";
//   cin >> n;
//   int i = 1;
//   while (i <= n)
//     {
//       int j = 1;
//       while (j <= n)
//         {
//         char ch = 'A' + i + j - 2;
//         cout << ch;
//         j = j + 1;
//         }
//       cout << endl;
//       i = i + 1;
//     }
// }

//*******************14th pattern******************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:";
//   cin>>n;

//   int i=1;
//   while(i<=n)
//     {
//       int j=1;
//       while(j<=i)
//         {
//           char ch='A'+i-1;
//           cout<<ch;
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

//*******************15th pattern*****************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:";
//   cin>>n;

//   int i=1;
//   char ch='A';
//   while(i<=n)
//     {
//       int j=1;
//       while(j<=i)
//         {
//           cout<<ch;
//           ch=ch+1;
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

//******************16th pattern*******************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:";
//   cin>>n;

//   int i=1;
//   while(i<=n)
//     {
//       int j=1;
//       while(j<=i)
//         {
//           char ch='A'+i+j-2;
//           cout<<ch;
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

//*******************17th pattern*******************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:";
//   cin>>n;

//   int i=1;
//   while(i<=n)
//   {
//     int j=1;
//     char ch='A'+n-1;
//     while(j<=i)
//       {
//         cout<<ch;
//         ch=ch-1;
//         j=j+1;
//       }
//      cout<<endl;
//      i=i+1;
//   }
// }

//********************18th pattern**************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:";
//   cin>>n;

//   int i=1;
//   while(i<=n)
//   {
//     int j=1;
//     char ch='A'+i-1;
//     while(j<=n)
//       {
//         cout<<ch;
//         ch=ch+1;
//         j=j+1;
//       }
//      cout<<endl;
//      i=i+1;
//   }
// }

//*******************19th pattern*****************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:";
//   cin>>n;

//   int i=1;
//   while(i<=n)
//     {
//       int space=n-i;
//       while(space)
//         {
//           cout<<" ";
//           space=space-1;
//         }

//       int j=1;
//       while(j<=i)
//         {
//           cout<<"*";
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

//****************20th pattern**************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:";
//   cin>>n;

//   int i=1;
//   while(i<=n)
//     {
//       int j=1;
//       int star=n-i+1;
//       while(j<=star)
//         {
//           cout<<"*";
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

//****************20th pattern*******************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:";
//   cin>>n;

//   int i=1;
//   while(i<=n)
//     {
//       int j=1;
//       //for space
//       int space=i-1;
//       while(space)
//         {
//           cout<<" ";
//           space=space-1;
//         }

//       // for star
//       int star=n-i+1;
//       while(j<=star)
//         {
//           cout<<"*";
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

//*****************21th pattern***************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:";
//   cin>>n;

//   int i=1;
//   while(i<=n)
//     {
//       int space=i-1;
//        while(space)
//       {                            
//           cout<<" ";
//          space=space-1;
//       }
//       int j=i;
//       while(j<=n)
//         {
          
//           cout<<i;
//           j=j+1;
//         }
//       cout<<endl;
//       i=i+1;
//     }
// }

//****************22th pattern*****************
// int main()
// {
//   int n;
//   cout<<"Enter value for n:";
//   cin>>n;

//   int i=1;
//   while(i<=n)
//     {
//       int j=n-i+1;
//       int space=n-i;
//       while(space)
//         {
//           cout<<" ";
//           space=space-1;
//         }
      
//       while(j<=n)
//       {
//         cout<<i;
//         j=j+1;
//       }
//       cout<<endl;
//       i=i+1;
//     }
// }

//*****************23rd pattern*****************
int main()
{
  int n;
  cout<<"Enter value for n:";
  cin>>n;

  int i=1;
  int value=1;
  while(i<=n)
    {
      int j=1;
      int space=i-1;
      while(space)
        {
          cout<<space;
          space=space-1;
        }
      
      while(j<=n)
        {
          cout<<value;
          value=value+1;
          j=j+1;
        }
      cout<<endl;
      i=i+1;
    }
  
}


