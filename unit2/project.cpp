
//5. Student Result Management (Best Practical)

#include<iostream>
using namespace std;

class Student
{
private:
    string name;
    int m1,m2,m3,total;

public:

    void input()
    {
        cout<<"Enter Name : ";
        cin>>name;

        cout<<"Enter 3 Subjects Marks : ";
        cin>>m1>>m2>>m3;

        total=m1+m2+m3;
    }

    void result()
    {
        cout<<"\nName : "<<name<<endl;

        cout<<"Total = "<<total<<endl;

        if(total>=240)
            cout<<"Grade A";

        else if(total>=180)
            cout<<"Grade B";

        else

            cout<<"Fail";
    }
};

int main()
{
    Student s;

    s.input();

    s.result();
}

/*   Exam में Encapsulation, Information Hiding, Getter/Setter, ADT में Program पूछा जाए, तो Bank Account, ATM, Employee Management, या Student Result Management वाले Programs लिखना बेहतर रहता है। ये Real-World Examples हैं, इसलिए Basic setMarks()/getMarks() वाले Examples से अधिक Professional लगते हैं। */