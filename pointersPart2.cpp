#include<iostream>
using namespace std;

void print(int *p)
{
    cout<<*p<<endl;
}

void update(int *p)
{
    p=p+1;
    cout<<"inside "<<p<<endl;
}

int main()
{
    /*
    int arr[10]={23,122,41,67};
    
    cout<<"Address of first element is:"<<arr<<endl;
    cout<<"Address of first element is:"<<&arr[0]<<endl;
    cout<<"Element at zeroth index:"<<*arr<<endl;
    cout<<"Element at zeroth index:"<<*arr+1<<endl;
    cout<<"Element at first index:"<<*(arr+1)<<endl;
    cout<<"Element:"<<*(arr)+1<<endl;
    cout<<"Element:"<<arr[2]<<endl;
    cout<<"Element:"<<*(arr+2)<<endl;
    */

   /*
   int temp[10];
   cout<<sizeof(temp)<<endl; // 10*4(size of int)=40

   int *ptr=&temp[0];
   cout<<sizeof(ptr)<<endl;
   cout<<sizeof(*ptr)<<endl;// size of value present at 0th location



    int a[20]={1,2,3,4,5};
    cout<<"-->"<<&a[0]<<endl; // address of element at 0th location

    int *p = &a[0];
    cout<<"-->"<<&p<<endl;  // address of p block



    int arr[10];
    //ERROR
    //arr=arr+1; not possible

    //This is possible in the case of pointer.When we execute 3rd statement our pointer will point to next block in array
    int *ptr=&arr[0];
    cout<<"--> "<<ptr<<endl;
    ptr=ptr+1;
    cout<<"--> "<<ptr<<endl;



    //Character array

    char ch[6] = "abcde";
    // attention here
    std::cout<< ch << endl;

    char *c=&ch[0];
    //prints entir string
    std::cout<<c<<endl;

     */

    int value=5;
    int *p=&value;

    print(p);

    cout<<"Before:"<<p<<endl;// before and after remains same because value is changing inside update function which is not visible outside the function if we want to see that updated value we have to call cout inside update function.
    update(p);
    cout<<"After:"<<p<<endl;
   
}