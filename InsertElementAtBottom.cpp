/*

#include<iostream>
using namespace std;

// Insert an element at the bottom of given stack

void solve(stack<int>& s, int x)
{
    // base case
    if(s.empty())
    {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    //recursive call
    solve(s,x);

    s.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x)
{
    solve(myStack, x);
    return myStack;
}


// Reverse stack using recursion

void insertAtBottom(stack<int> &s,int n)
{
    // base case
    if(s.epmty()){
        stack.push(n);
        return;
    }

    int num = s.pop();
    s.pop();

    //recursive call
    insertAtBottom(s,n);

    s.push(num);
}

void reverseStack(stack<int> &stack)
{
    // base case
    if(stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);

    insertAtBottom(stack,num);
}





















*/