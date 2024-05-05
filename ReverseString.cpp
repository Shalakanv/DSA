#include<iostream>
#include<stack>
using namespace std;
// when we pop element from stack , it always return it in reverse order. For this question swapping is the best approach
int main()
{
    string str = "Shalaka";

    stack<char> s;

    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string ans = "";

    while(!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }
    cout<<"Answer is:"<<ans<<endl;
}