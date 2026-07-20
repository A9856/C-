#include<iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "Area = " << 5 * 4;
    }
};

int main()
{
    Rectangle r;

    r.area();

    return 0;
}

//user input 

#include<iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Rectangle : public Shape
{
    int l,w;

public:

    void input()
    {
        cout<<"Enter Length : ";
        cin>>l;

        cout<<"Enter Width : ";
        cin>>w;
    }

    void area()
    {
        cout<<"Area = "<<l*w;
    }
};

int main()
{
    Rectangle r;

    r.input();

    r.area();

    return 0;
}