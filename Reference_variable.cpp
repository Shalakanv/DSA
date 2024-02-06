#include<iostream>
using namespace std;

// create variable size array
int getSum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    return sum;
}

/*
int& func(int a)
{
    int num=a;
    int& ans=num;
    return ans;
}

void update2(int& n) // call by reference
{
    n++;
}

void update1(int n) // call by value
{
    n++;
}

*/

int main()
{
    /*
    int i=5;
    // create reference variable
    int& j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    */
   /*
   int n=5;
   
   cout<<"Value before update function call "<<n<<endl;
   update1(n);
   cout<<"Value after update function call "<<n<<endl;
   

   cout<<"Value before update function call "<<n<<endl;
   update2(n);
   cout<<"Value after update function call "<<n<<endl;

   */

  int n;
  cin>>n;

  // variable size array
  int* arr = new int[n];

  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  int ans=getSum(arr,n);
  cout<<"Answer is:"<<ans<<endl;
  return 0;
}