#include<iostream>
using namespace std;

/*
// Single Inheritance
class Animal{
    public:
    int age;
    int weight;

    public:
     void speak(){
        cout<<"Speaking"<<endl;
     }
};

class dog: public Animal{

};

int main()
{
    dog d;
    d.speak();
}

**************** Multilevel Inheritance ******************

class Animal{
    public:
    int age;
    int weight;

    public:
     void speak(){
        cout<<"Speaking"<<endl;
     }
};

class dog: public Animal{

};

class Sheru: public dog{

};

int main()
{
    Sheru s;
    s.speak();
}

************* Multiple Inheritance -----> we can inherit child class from more than one parent class ***************

class Animal{
    public:
    int age;
    int weight;

    public:
     void bark(){
        cout<<"Barking"<<endl;
     }
};

class Human{
    public:
    string color;

    public:
    void speak()
    {
        cout<<"Speaking"<<endl;
    }
};

class hybrid: public Animal,public Human{

};

int main()
{
    hybrid h;
    h.bark();
    h.speak();
}

************ Hierarchical Inheritance ----> one class serves as parent class for more than 1 child class *************
class A{
    public:
    void func1()
    {
        cout<<"Inside function1"<<endl;
    }
};

class B: public A{
    public:
    void func2()
    {
        cout<<"Inside function2"<<endl;
    }
};

class C: public A{
    public:
    void func3()
    {
        cout<<"Inside function3"<<endl;
    }
};

int main()
{
    A obj1;
    obj1.func1();

    B obj2;
    obj2.func2();
    obj2.func1();

    C obj3;
    obj3.func3();
    obj3.func1();


}

// ************* Hybrid Inheritance -----> combination of more than one type of inheritance. **********

class A{
    public:
    int age;
    int weight;
};

class D{
    public:
    string color;

    public:
    void movie()
    {
        cout<<"3 Idiots"<<endl;
    }
};

class B: public A{

};

class C: public A, public D{

};

int main(){
    C c1;
    c1.movie();
}

*/

// Inheritance Ambiguity  - If we are inheriting class from two classes and that two classes have function with same name and when we will call func of inherited class then that class will get confuse which function will i call means from which class this is called inheritance ambiguity and to solve this problem we use scope resolution operator.

class A{
    public:

    void func(){
        cout<<"Function of class A"<<endl;
    }
};

class B{
    public:

    void func()
    {
        cout<<"Function of class B"<<endl;
    }
};

class C:public A,public B{

};

int main()
{
    C c1;
    c1.A::func();
}