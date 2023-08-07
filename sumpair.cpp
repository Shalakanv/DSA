#include<iostream>
using namespace std;

int main()
{
  int arr[]={1,2,3,4,5};
  int ans1,ans2;
  int sum=5;

  for(int i=0;i<5;i++)
    {
      for(int j=i+1;j<5;j++)
        {
            
          if(arr[i]+arr[j]==sum)
          {
            int temp=min(arr[i],arr[j]);
            ans1=max(arr[i],arr[j]);
            ans2=temp;
            cout<<ans1<<" "<<ans2<<" "<<endl;
          }
        }
    }
}