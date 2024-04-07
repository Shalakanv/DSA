#include<iostream>
using namespace std;

// Function overloading - If we have written two function with same name and we are calling that function then it will throw error.To solve this error and to do function overloading we have to make some chaanges in its input argument.Return type change is not helpful in this case. 

/*
class A{
    public:

    void sayHello()
    {
        cout<<"Hello I am Shalaka"<<endl;
    }

    void sayHello(string name)
    {
        cout<<"Hello I am Shlok"<<name<<endl;
    }
};

int main()
{
    A obj;
    obj.sayHello();
}

So the main idea behind “Operator overloading” is to use C++ operators with class variables or class objects. Redefining the meaning of operators really does not change their original meaning; instead, they have been given additional meaning along with their existing ones.

class B{
    public:
    int a;
    int b;

    public:
    int add()
    {
        return a+b;
    }

    void operator+ (B &obj)  // B type object
    {
        int value1 = this -> a;
        int value2 = obj.a;
        cout<<"Output "<< value2-value1 <<endl;
    }
};

int main()
{
    B obj1, obj2;

    obj1.a=4;
    obj2.a=7;

    //obj1.add();
    obj1 + obj2;
}

*/

// Run time polymorphism

class Animal {
    public:
    void speak()
    {
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak()
    {
        cout<<"Barking"<<endl;
    }
};

int main()
{
    Dog D;
    D.speak();
}