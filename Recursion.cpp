#include<iostream>
using namespace std;
/*
int factorial(int n)
{
    //base case
    if(n==0)
        return 1;

    int smallerProb=factorial(n-1);
    int biggerProb= n * smallerProb;
    retrun biggerProb;
    
    return n * factorial(n-1);

}

int power(int n)
{
    // base case
    if(n==0)
    return 1;

    int smallerProb=power(n-1);
    int biggerProb=2*smallerProb;

    return biggerProb;
}

void print(int n)
{
    //base case
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<<endl;
}

fibonacci series

int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }

    int ans=fib(n-1)+fib(n-2);
    return ans;
}

/* Count ways to reach the N-th stairs 

int countways(int stairs)
{
    if(stairs<0)
    {
        return 0;
    }
    if(stairs == 0)
    {
        return 1;
    }

    int ans=countways(stairs-1)+countways(stairs-2);

    return ans;
}
*/

/* say digit */

void sayDigit(int n,string arr[])
{
    //base case
    if(n == 0)
        return ;

    //processing
    int digit=n%10;
    n=n/10;

    //recursive call
    sayDigit(n,arr);

    cout<<arr[digit]<<" ";
}

int main()
{
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;

    /*
    int ans=factorial(n);
    cout<<"Your ans is:"<<ans;
    

   int ans=power(n);

   cout<<ans<<endl;
   return 0;
    cout<<endl;
    print(n);
    int ans=fib(n);

    int ans=countways(n);
    cout<<"Ans is:"<<ans;
    */
    cout<<endl<<endl<<endl;
    sayDigit(n,arr);
    cout<<endl<<endl<<endl;

    return 0;
}