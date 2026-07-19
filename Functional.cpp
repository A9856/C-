#include<iostream>
using namespace std;
// Student Functions
void student(string name, int roll, int marks)
{
    cout<<"\n----- Student -----"<<endl;
    cout<<"Name  : "<<name<<endl;
    cout<<"Roll  : "<<roll<<endl;
    cout<<"Marks : "<<marks<<endl;
}

// Teacher Functions
void teacher(string name, string subject, int salary)
{
    cout<<"\n----- Teacher -----"<<endl;
    cout<<"Name    : "<<name<<endl;
    cout<<"Subject : "<<subject<<endl;
    cout<<"Salary  : "<<salary<<endl;
}

int main()
{
    student("Adil",101,95);
    teacher("Rahul Sir","C++",50000);

    return 0;
}