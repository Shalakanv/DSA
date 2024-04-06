#include<iostream>
using namespace std;

//class declaration
class hero{
    //properties
    private: // access modifier
    int health;
    public:
    char level;
    static int timeToComplete;

    // default constructor
    hero()
    {
        cout<<"Default constructor called"<<endl;
    }

    // parameterized constructor
    hero(int health)
    {
        cout<<"Address of this keyword:"<<this<<endl;
        this -> health= health;//spiderman vali health ke andar input vali health dal do
        // This keyword stores the address of current object
    }

    hero(int health,char level)
    {
        this -> health= health;
        this -> level= level;
    }

    //Copy Constructor
    hero(hero& temp)//Its a copy constructor and if we pass it constructor passs by value then its copy get created here and again it will call copy constructor but we don't want its copy so we pass it by reference
    {
        cout<<"Copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;

    }

    void print()
    {
        cout<<"Health:"<<this->health<<endl;
        cout<<"Level:"<<this->level<<endl;
    }

    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health = h;
    }

    int getlevel(){
        return level;
    }
    void setlevel(char ch){
        level = ch;
    }
    static int random()
    {
        return timeToComplete;
    }

    ~hero(){
        cout<<"Destructor called"<<endl;
    }
};

int hero::timeToComplete = 5;

int main()
{
    cout<<hero::random()<<endl;
    /*
    cout<<hero::timeToComplete<<endl;
    hero a;
    cout<<a.timeToComplete<<endl;

    hero b;
    b.timeToComplete = 10;
    cout<<a.timeToComplete<<endl;
    cout<<b.timeToComplete<<endl;

    //static
    hero a;

    //dynamic
    hero *b = new hero();
    delete b; // for dynamically created object we have to call destructor manually.

    hero S(70,'C');
    S.print();

    //Copy Constructor
    hero R(S);
    R.print();

    // statically object creation
    hero spiderman(10);
    cout<<"Address of spiderman is:"<< &spiderman<<endl;
    cout<<endl;
    //dynamically object creation
    hero *h = new hero;

    //object creation statically
    hero Spiderman;
    Spiderman.sethealth(70);
    Spiderman.setlevel('A');
    cout<<"Level is:"<<Spiderman.level<<endl;
    cout<<"Health is:"<<Spiderman.gethealth()<<endl;


    //object creation dynamically
    hero *b = new hero;
    b->setlevel('B');
    b->sethealth(50);
    cout<<"Level is:"<<(*b).level<<endl;
    cout<<"Health is:"<<(*b).gethealth()<<endl;
    // OR
    cout<<"Level is:"<<b->level<<endl;
    cout<<"Health is:"<<b->gethealth()<<endl;

    cout<<"Health is:"<<Spiderman.gethealth()<<endl;

    Spiderman.sethealth(70);
    Spiderman.level = 'A';
    //cout<<"Size is:"<<sizeof(h1)<<endl;

    cout<<"Health is:"<<Spiderman.gethealth()<<endl;
    cout<<"Level is:"<<Spiderman.level<<endl;

    */
}