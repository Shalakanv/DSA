#include<iostream>
using namespace std;

class Human{

    public:
    int height;
    int weight;
    int age;

    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight=w;
    }
};

class Male: public Human{

    public:
    string color;

    void sleep()
    {
        cout<<"Sleeping"<<endl;
    }
};
/*
Encapsulation - Information hiding / data hiding

class Student{
    private:
    string name;
    int age;
    int height;

    public:
    int getAge()
    {
        return this -> age;
    }
};
*/
int main()
{   
    Male object1;
    cout<< object1.age <<endl;
    cout<< object1.weight <<endl;
    cout<< object1.height <<endl;
    cout<< object1.color <<endl;

    object1.setWeight(84);
    cout<<object1.weight<<endl;
    object1.sleep();
    /*
    Student s1;
    cout<<"All is well";
    */
}

/*

1.Encapsulation- Wrapping up data members and functions in a single unit like class.





*/