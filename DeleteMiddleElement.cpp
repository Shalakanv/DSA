/*
#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&inputStack,int count,int size)
{
    // base case
    if(count == size/2)
    {
        inputStack.pop();
        return;
    }

    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    solve(inputStack,count+1,size);

    inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack,int count,int N)
{
    int count = 0;
    solve(inputStack,count,N);
}


*/


/*
Valid Parenthesis

bool isValidParenthesis(string expression)
{
    stack<char> s;
    for(int i=0; i< expression.length(); i++)
    {
        char ch = expression[i];

        // If opening bracket,push in stack
        // If closing bracket , check top of tha stack and pop

        if(ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }
        else{
            // for closing bracket
            if(!s.empty())
            {
                char top = s.top();
                
                if((ch == ')' && top == '(') || (ch == '}' && top == '{') || (ch == ']' && top == '['))
                {
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    if(s.empty())
    {
        return true;
    }
    else{
        return false;
    }

}






















*/


