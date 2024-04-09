#include<iostream>
using namespace std;

// Bubble sort using recursion
void sortArray(int *arr,int n)
{
    // base case
    if(n == 0 || n == 1)
    {
        return ;
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
    // Recursive call
    sortArray(arr,n-1);
}




// if power is even(a^b) - a^b/2 * a^b/2 (2^2=2^2/2 * 2^2/2)
// if power is odd(a^b)  - a * a^b/2 * a^b/2 (2^3=2* 2^3/2 * 2^3/2)
int power(int i,int j)
{
    // base case
    if(j == 0)
    {
        return 1;
    }

    if(j == 1)
    {
        return i;
    }

    // Recursive call
    int ans=power(i,j/2);

    if(j%2 == 0)
    {
        return ans*ans;
    }
    else{
        return i*ans*ans;
    }
}

// Check palindrome
bool checkPalindrome(string str,int i,int j)
{
    // base case
    if(i>j)
        return true; 

    if(str[i] != str[j])
        return false;
    else{
        return checkPalindrome(str,i+1,j-1); 
    }
}

// Reverse the string
void reverse(string& str,int i,int j)
{
    //base case
    if(i>j)
    {
        return;
    }
    swap(str[i],str[j]);
    i++;
    j--;

    //Recursive call 
    reverse(str,i,j);
}

int main()
{
    /*
    string name;
    int size;
    cout<<"Enter size of string:"<<endl;
    cin>>size;
    cout<<"Enter name which you want to reverse:"<<endl;
    cin>>name;
    // if we have not taken size in input we can write end as name.length()-1
    reverse(name,0,size-1);
    bool isPalindrome = checkPalindrome(name,0,size-1);
    cout<<name<<endl;
    if(isPalindrome)
    {
        cout<<"Its a palindrome"<<endl;
    }
    else{
        cout<<"Its not a palindrome"<<endl;
    }

   int a,b;
   cout<<"Enter value for a and b:"<<endl;
   cin>>a;
   cin>>b;

   int ans=power(a,b);
   cout<<"Answer is:"<<ans<<endl;
   */

  int arr[5];
  cout<<"Enter array elements:";
  for(int i=0;i<5;i++)
  {
    cin>>arr[i];
  }
  sortArray(arr,5);
  cout<<"Sorted array is:"<<endl;

  for(int i=0;i<5;i++)
  {
    cout<<arr[i]<<endl;
  }
}