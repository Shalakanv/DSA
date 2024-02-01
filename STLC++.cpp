using namespace std;
#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>

//*********STL Array**********

// int main()
// {
//     array<int,4> a={1,2,3,4};

//     int size=a.size();

//     for(int i=0;i<size;i++)
//     {
//         cout<<a[i]<<endl;
//     }

//     cout<<"Element at 2nd position "<<a.at(2)<<endl;

//     cout<<"Empty or not "<<a.empty()<<endl;

//     cout<<"First Element "<<a.front()<<endl;

//     cout<<"Last Element "<<a.back()<<endl;
// }

//**********STV Vector********

// int main()
// {
//     vector<int>v;
    // vector<int>v(5,1); (all the elements get initialize with 1)
//     cout<<"Capacity "<<v.capacity()<<endl;  // Space allocated to elements

//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     cout<<"Capacity "<<v.capacity()<<endl;
//     cout<<"Size "<<v.size()<<endl;  // Total element in vector

//     cout<<"Element at 2nd index "<<v.at(2)<<endl;

//     cout<<"Front element "<<v.front()<<endl;
//     cout<<"Back element "<<v.back()<<endl;

//     cout<<"Befor pop operation";
//     for(int i:v)
//     {
//         cout<<i<<" ";
//     }

//     v.pop_back();
//     cout<<"\nAfter pop operation";
//     for(int i:v)
//     {
//         cout<<i<<" ";
//     }

//     cout<<"\nBefore clear size"<<v.size()<<endl;
//     v.clear();
//     cout<<"After clear size"<<v.size()<<endl;

// }

//************STL Dequeue************

// int main()
// {
//     deque<int>d;

//     d.push_back(1);
//     d.push_back(2);
//     d.push_back(3);

//     for(int i:d)
//     {
//         cout<<i<<" ";
//     }

//     d.push_front(4);

//     for(int i:d)
//     {
//         cout<<i<<" ";
//     }

//     cout<<"\nElements before erase operation "<<d.size()<<endl;
//     d.erase(d.begin(),d.begin()+1);
//     cout<<"\nElements after erase operation "<<d.size()<<endl;

//     for(int i:d)
//     {
//         cout<<i<<" ";
//     }


// }

//************STL Linked List**********

// int main()
// {
//     list<int>l;

//     list<int>n(5,100);
//     cout<<"Printing n"<<endl;
//     for(int n:n)
//     {
//         cout<<n<<" ";
//     }
//     cout<<endl;

//     l.push_back(1);
//     l.push_front(2);

//     for(int n:l)
//     {
//         cout<<n<<" ";
//     }

//     l.erase(l.begin());
//     cout<<"\nafter erase"<<endl;

//     for(int n:l)
//     {
//         cout<<n<<" "<<endl;
//     }

//     cout<<"Size of list"<<l.size()<<endl;

// }

//**************STL stack***********
// Stack is Last in first out 

// int main()
// {
//     stack<string>s;

//     s.push("Shalaka");
//     s.push("Vyawhare");
//     s.push("Shlok");

//     cout<<"Top element is:"<<s.top()<<endl;

//     s.pop();

//     cout<<"Top element is:"<<s.top()<<endl;

//     cout<<"Size of stack:"<<s.size()<<endl;

//     cout<<"Empty or Not:"<<s.empty()<<endl;


// }

//************STL Queue*************
// Queue is First in first out

// int main()
// {
//     queue<string>q;

//     q.push("Shalaka");
//     q.push("Vyawhare");
//     q.push("Shlok");

//     cout<<"Size of queue is:"<<q.size()<<endl;

//     cout<<"Top element:"<<q.front()<<endl;
//     q.pop();
//     cout<<"Top element:"<<q.front()<<endl;

//     cout<<"Size of queue is:"<<q.size()<<endl;

// }

//*****************STL priority queue***************

// int main()
// {
//     // max heap(when we initialize the queue, it is by default max heap)
//     priority_queue<int> maxi;  //(when we pop the element,greatest element will come first)

//     // min heap(To i initialize min heap queue we use below line)
//     priority_queue<int,vector<int>,greater<int>>mini;

//     maxi.push(1);
//     maxi.push(3);
//     maxi.push(2);
//     maxi.push(0);

//     cout<<"Size of queue "<<maxi.size()<<endl;
//     int n=maxi.size();
//     for(int i=0;i<n;i++)
//     {
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }cout<<endl;

//     mini.push(5);
//     mini.push(1);
//     mini.push(0);
//     mini.push(4);
//     mini.push(3);

//     cout<<"Size of queue "<<mini.size()<<endl;
//     int m=mini.size();
//     for(int i=0;i<m;i++)
//     {
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }cout<<endl;
// }

//**************STL set*****************
// store element only once in set
//The elements in a set are automatically sorted in ascending order,Sets support iterators, allowing for easy traversal of the elements.

// int main(){
//     set<int> s;

//     s.insert(5);
//     s.insert(3);
//     s.insert(8);
//     s.insert(0);
//     s.insert(1);

//     for(int n:s)
//     {
//         cout<<n<<endl;
//     }
//     cout<<endl;
//     set<int>::iterator it=s.begin();
//     it++;
//     s.erase(it);

//     for(int i:s)
//     {
//         cout<<i<<endl;
//     }

//     cout<<endl;
//     cout<<"5 is present in set or not: "<<s.count(5)<<endl;

//     set<int>:: iterator itr =s.find(5);
//     for(auto it=itr;it!=s.end();it++) //the use of auto in the for loop is a C++ feature that enhances code readability and maintainability by automatically deducing the type of the iterator from its initialization expression.
//     {
//         cout<<*it<<" ";
//     }cout<<endl;
// }

//***************STL map***************
// map stores values in key-value pair form.key must be unique,value can be same but key must be unique i.e same key can not point to two value

//Elements in a map are automatically sorted 


// int main()
// {
//     map<int,string>a;

//     a[1]="Shala";
//     a[2]="Nandkishor";
//     a[13]="Vyawhare";

//     a.insert({5,"Shlok"});

//     cout<<"Before erase:"<<endl;
//     for(auto i:a)
//     {
//         cout<<i.first<<":"<<i.second<<" "<<endl;
//     }
   //i.first accesses the key of the current key-value pair and i.second accesses the value associated with the key in the current key-value pair.

//     cout<<"Find is 13 present or not:"<<a.count(13)<<endl;

//     cout<<"After erase:"<<endl;
//     a.erase(5);
//     for(auto i:a)
//     {
//         cout<<i.first<<":"<<i.second<<" "<<endl;
//     }

//     auto it=a.find(13);
//     for(auto i=it;i!=a.end();i++)
//     {
//         cout<<(*i).first<<(*i).second<<endl;
//     }
// }

//*************Algorithms in STL*************

int main()
{
    vector<int>v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6:"<<binary_search(v.begin(),v.end(),6)<<endl;

    int a=3;
    int b=5;

    cout<<"Max:"<<max(a,b);
    cout<<"\nMin:"<<min(a,b);

    swap(a,b);
    cout<<"\na:"<<a<<endl;

    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<"Reverse string is:"<<s<<endl;

    sort(v.begin(),v.end());
    cout<<"After sorting:";
    for(int n:v)
    {
        cout<<n<<" ";
    }



}

