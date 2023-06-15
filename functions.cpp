#include <iostream>
using namespace std;

// *************************power function***************
// int ans=1;
// int power()
// {
//   int a,b;
//   cout<<"Enter first number:";
//   cin>>a;
//   cout<<"Enter second number:";
//   cin>>b;

//   for(int i=1;i<=b;i++)
//     {
//       ans=ans*a;
//     }
//   return ans;
// }
// int main()
// {
//   ans=power();
//   cout<<"Answer is:"<< ans<<'\n';
//   ans=power();
//   cout<<"Answer is:"<< ans;
// }

//**************************isEven function***************
// bool isEven(int a)
// {
//   if(a%2==0)
//   {
//     return true;
//   }
//   else
//   {
//     return false;
//   }
// }

// int main()
// {
//   int num;
//   cout<<"Enter number which you want to check:";
//   cin>>num;

//   if(isEven(num))
//   {
//     cout<<"Number is even";
//   }
//   else
//   {
//     cout<<"Number is odd";
//   }
  
// }

//************************factorial function******************
// int factorial(int n)   // function signature
// {
//   // function body
//   int ans=1;
//   for(int i=1;i<=n;i++)         // n=5  for first iteration i=1,ans=1*1=1
//     {                           // i=2  for 2nd iteration ans=1*2=2
//       ans=ans*i;                // i=3  for 3rd iteration ans=2*3=6
//     }                           // i=4  for 4th iteration ans=6*4=24
//   return ans;                   // i=5  for 5th iteration ans=24*5=120
// }

// int nCr(int n,int r)
// {
//   int result;                                                 
//   result=(factorial(n))/(factorial(r)*factorial(n-r));
//   return result;
// }

// int main()
// {
//   int n,r;
//   cout<<"enter value for n:";
//   cin>>n;
//   cout<<"enter value for r:";
//   cin>>r;
//   cout<<"Result is:"<<nCr(n,r); 
// }

//********************isprime function******************
// bool isprime(int n)
// {
//   for(int i=2;i<n-1;i++)
//     {
//       if(n%i==0)
//       {
//         return 0;
//       }
//     }
//   return 1;
// }

// int main()
// {
//   int n;
//   cout<<"Enter value for n:";
//   cin>>n;

//   if(isprime(n))
//   {
//     cout<<"Prime number";
//   }
//   else
//   {
//     cout<<"Not a prime number";
//   }
// }
