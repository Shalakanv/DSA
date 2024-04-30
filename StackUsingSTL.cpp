#include<iostream>
#include<stack>
using namespace std;

int main()
{
    // creation of stack
    stack <int> s;

    // push opertaion
    s.push(2);
    s.push(3);

    // pop operation
    s.pop();

    cout<<"Printing top element "<<s.top()<<endl;
    if(s.empty())
    {
        cout<<"Stack is empty";
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size of stack is:"<<s.size();

}