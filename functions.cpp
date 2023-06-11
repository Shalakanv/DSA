#include <iostream>
using namespace std;

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

bool isEven(int a)
{
  if(a%2==0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int num;
  cout<<"Enter number which you want to check:";
  cin>>num;

  if(isEven(num))
  {
    cout<<"Number is even";
  }
  else
  {
    cout<<"Number is odd";
  }
  
}
