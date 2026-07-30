
//1. Encapsulation + Getter + Setter (Validation)

#include<iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    int marks;

public:

    void setData(int r, string n, int m)
    {
        rollNo = r;
        name = n;

        if(m>=0 && m<=100)
            marks = m;
        else
            marks = 0;
    }

    int getMarks()
    {
        return marks;
    }

    void display()
    {
        cout<<"Roll No : "<<rollNo<<endl;
        cout<<"Name    : "<<name<<endl;
        cout<<"Marks   : "<<marks<<endl;
    }
};

int main()
{
    Student s;

    s.setData(101,"Adil",95);

    s.display();

    cout<<"Grade Check Marks : "<<s.getMarks();

    return 0;
}


/*इसमें क्या Advance है?
Validation
Getter
Setter
Encapsulation
Information Hiding */
