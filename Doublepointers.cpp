#include<iostream>
using namespace std;

void update(int **p)
{
    //p=p+1;
    //No change

    //*p=*p+1;
    //value of ptr1 is changing because we are doing this changes in main function so that change is reflecting

    **p=**p+1;
    //value of i is changing because we are doing this changes in main function so that change is reflecting


}

int main()
{
    /*
    int i=5;
    int *ptr1=&i;
    int **ptr2=&ptr1;

    cout<<"Zeroth:"<<i<<endl;
    cout<<"Third:"<<*ptr1<<endl; // value at ptr1's address
    cout<<"Sixth:"<<**ptr2<<endl; //print i

    cout<<"Seventh:"<<&i<<endl;
    cout<<"first:"<<ptr1<<endl; //content of ptr1 means address of i
    cout<<"Fourth:"<<*ptr2<<endl; //value present at ptr2's addresss means ptr1's value

    cout<<"Second:"<<&ptr1<<endl; //address of ptr1
    cout<<"Fourth:"<<ptr2<<endl; // content at ptr2

    cout<<"Before:"<<i<<endl;
    cout<<"Before:"<<ptr1<<endl;
    cout<<"Before:"<<ptr2<<endl;
    update(ptr2);
    cout<<"After:"<<i<<endl;
    cout<<"After:"<<ptr1<<endl;
    cout<<"After:"<<ptr2<<endl;

    */


    
}