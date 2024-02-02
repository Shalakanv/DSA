#include<iostream>
#include<vector>
using namespace std;

// int reverse(int arr[],int size)
// {
//     int s=0;   // swapping started from first index
//     int e=size-1;

//     while(s<=e)
//     {
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
//     return 0;

// }

// int main()
// {
//     int array[5]={2,5,7,1,0};

//     int ans=reverse(array,5);

//     cout<<"Reversed array is:";
//     for(int i=0;i<5;i++)
//     {
//         cout<<array[i]<<" ";
//     }
// }
 
// int reverse(int arr[],int size,int z)
// {
//     int s=z;   // swapping started from mention index lets say 2
//     int e=size-1;

//     while(s<=e)
//     {
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
//     return 0;

// }

// int main()
// {
//     int array[5]={2,5,7,1,0};
//     int n;
//     cout<<"Give me the number from which you want swapping:";
//     cin>>n;

//     int ans=reverse(array,5,n);

    
//     cout<<"Reversed array is:";
//     for(int i=0;i<5;i++)
//     {
//         cout<<array[i]<<" ";
//     }
// }
 
//*********************************************************************

// vector<int> reverse(vector<int>v)
// {
//     int s=0;
//     int e=v.size()-1;

//     while(s<=e)
//     {
//         swap(v[s],v[e]);
//         s++;
//         e--;
//     }

//     return v;
// }

// int main()
// {
//     vector<int>v;
//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);

//     vector<int> ans=reverse(v);

//     cout<<"Reversed array is:";
//     for(auto i:ans)
//     {
//         cout<<i<<" ";
//     }

// }

//***********************Merge 2 Array***************

// void merge(int a[],int n,int b[],int m,int c[])
// {
//     int i=0,j=0;
//     int k=0;

//     while(i<n && j<m)
//     {
//         if(a[i]<b[j])
//         {
//             c[k]=a[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             c[k]=b[j];
//             j++;
//             k++;
//         }
//     }

     //Copy 1st array's element in 3rd array
//     while(i<n)
//     {
//         c[k]=a[i];
//         i++;
//         k++;
//     }

     //Copy 2nd array's element in 3rd array
//     while(j<m)
//     {
//         c[k]=b[j];
//         j++;
//         k++;
//     }
// }

// void print(int ans[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<ans[i]<<" ";
//     }
// }


// int main()
// {
//     int arr1[5]={1,3,5,7,9};
//     int arr2[3]={2,4,6};
//     int arr3[8];

//     merge(arr1,5,arr2,3,arr3);

//     print(arr3,8);
//  }

//**************** Moving all zeros to right side *********************


// int move(int arr[],int n)
// {
//     int i=0;
//     for(int j=0;j<n;j++)
//     {
//         if(arr[j] != 0)
//         {
//             swap(arr[j],arr[i]);
//             i++;
//         }
//     }
//     return 0;
// }


// int main()
//  {
//     int array[6]={1,3,0,4,0,6};

//     move(array,6);

//     cout<<"Sorted array is:";
//     for(int i=0;i<6;i++)
//     {
//         cout<<array[i]<<" ";
//     }

//  }

//***********************Rotate an array by 'k'*************************

// vector<int>rotate (vector<int>&v,int n)
// {
//     vector<int>temp(v.size());
//     for(int i=0;i<v.size();i++)
//     {
//         temp[(i+n)%v.size()]=v[i];
//     }
//     v=temp;

// }

// int main()
// {
//     vector<int>v;

//     v.push_back(3);
//     v.push_back(5);
//     v.push_back(8);
//     v.push_back(0);

//     cout<<"Given vector is:";
//     for(auto n:v)
//     {
//         cout<<n<<" ";
//     }
    
//     int k;
     
//     cout<<"\nValue of k for rotation:";
//     cin>>k;
//     rotate(v,k);

//     cout<<"Rotated array:";
//     for(auto s:v)
//     {
//         cout<<s<<" ";
//     }

// }


//******************Check if array is sorted and rotated********************

// If we get one or zero pair having previous element greater than next element then that array is sorted and rotated otherwise it is not.

// bool check(vector<int>&v)
// {
//     int count=0;
//     int n=v.size();

//     for(int i=1;i<n;i++)
//     {
//         if(v[i-1] > v[i]){
//             count++;
//         }
//     }

//     if(v[n-1] > v[0])
//     {
//         count++;
//     }
//     return count<=1;
// }

// int main()
// {
//     vector<int>v;

//     v.push_back(3);
//     v.push_back(5);
//     v.push_back(7);
//     v.push_back(1);
//     v.push_back(6);

//     cout<<"Given vector is:";
//     for(auto n:v)
//     {
//         cout<<n<<" ";
//     }

//     int ans=check(v);

//     cout<<"\nOur ans is:"<<ans;
// }

//**********************Addition of two arrays********************

//Confusion
// void reverse(int a[],int size)
// {
//     int s=0;
//     int e=size-1;
//     while(s<e)
//     {
//         swap(a[s++],a[e--]);
//     }
// }

// int* addition(int array1[],int s1,int array2[],int s2)
// {
//     int n=s1-1;
//     int m=s2-1;

//     int* ans=new int[6];
//     int carry=0;
//     int index=0;

//     while(n>=0 && m>=0)
//     {
//         int val1=array1[n];
//         int val2=array2[m];

//         int sum=val1+val2+carry;
//         carry=sum/10;
//         sum=sum%10;
//         ans[index++]=sum;
//         n--;
//         m--;

//     }

//     while(n>=0)
//     {
//         int sum=array1[n]+carry;
//         carry=sum/10;
//         sum=sum%10;
//         ans[index++]=sum;
//         n--;

//     }

//     while(m>=0)
//     {
//         int sum=array2[m]+carry;
//         carry=sum/10;
//         sum=sum%10;
//         ans[index++]=sum;
//         m--;

//     }

//     while(carry!=0)
//     {
//         int sum=carry;
//         carry=sum/10;
//         sum=sum%10;
//         ans[index++]=sum;

//     }

//     reverse(ans,index);
//     return ans;
// }

// int main()
// {
//     int arr1[5]={1,2,3,0,4};
//     int arr2[2]={4,5};

//     int* result=addition(arr1,5,arr2,2);

//     cout<<"Sum:";
//     for(int i=0;i<6;i++)
//     {
//         cout<<result[i]<<" ";
//     }

//     delete[]result;

//     return 0;
// }

