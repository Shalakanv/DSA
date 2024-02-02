#include<iostream>
#include<vector>
using namespace std;
/*
find number is positive or not
bool isPrime(int num)
{
    if(num<=1)
    return false;
    
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return false;
        }

    }
    return true;
}
*/

// Sieve of eratosthenes
//(Find count of prime numbers from 1 to n)  
//time complexity(n*log(log n))

int countPrime(int n)
{
    int cnt=0;
    vector<bool>prime(n+1,true);
    prime[0]=prime[1]=false;

    for(int i=2;i<n;i++)
    {
        if(prime[i])
        {
            cnt++;
        }

        for(int j=2*i;j<n;j=j+i)
        {
            prime[j]=0;
        }
    }
    return cnt;

}

//Calculate GCD/HCF of two number

int gcd(int a,int b)
{
    if(a==0)
    {
        return b;
    }
    if(b==0)
    {
        return a;
    }

    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int main()
{
    int number;
    cout<<"Enter number which you want to check:"<<endl;
    cin>>number;

    int num1,num2;
    cout<<"Enter two numbers:"<<endl;
    cin>>num1;
    cin>>num2;

    /*
    if(isPrime(number)){

         cout<<"Number is prime"<<endl;
    }
    else{
         cout<<"Number is not prime"<<endl;
    }
    */

    int ans=countPrime(number);
    cout<<"Total prime numbers are:"<<ans<<endl;

    int ans1= gcd(num1,num2);
    cout<<"GCD is:"<<ans1;

    
}