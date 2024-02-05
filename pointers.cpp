#include<iostream>
using namespace std;

int main()
{
    int num=5;
    cout<<"Address of num is:"<<&num<<endl;

    //Syntax for pointer creation
    int *ptr=&num;
    cout<<"Value is:"<<*ptr<<endl;
    cout<<"Address is:"<<ptr<<endl;

    //pointer pointing to double value
    double d=4.3;
    double *p2=&d;

    //2nd type of pointer initialization
    int i=5;
    int *p=0;
    p=&i;

    cout<<"Value is:"<<*p2<<endl;
    cout<<"Address is:"<<p2<<endl;

    cout<<"Value is:"<<*p<<endl;
    cout<<"Address is:"<<p<<endl;


    cout<<"Size of integer is"<<sizeof(num)<<endl;
    cout<<"Size of pointer is"<<sizeof(ptr)<<endl;
    cout<<"Size of pointer is"<<sizeof(p2)<<endl;

    int num1=5;
    int a=num1;
    a++;
    cout<<num1<<endl;
    int *pr=&num1;
    cout<<"before:"<<num1<<endl;
    (*pr)++; //We are incrementing value
    cout<<"afetr:"<<num1<<endl;

    //copying pointer
    int *q=pr;
    cout<<pr<<"-"<<q<<endl;
    cout<<*pr<<"-"<<*q<<endl;

    //important concept
    int in=3;
    int *t=&in;
    *t=*t+1;
    cout<<*t<<endl;
    cout<<"before t"<<t<<endl;
    t=t+1; // move 4 byte forword
    cout<<"after t"<<t<<endl;
}