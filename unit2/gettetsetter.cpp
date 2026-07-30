
//4. Getter Setter (Employee)

#include<iostream>
using namespace std;

class Employee
{
private:
    int salary;

public:

    void setSalary(int s)
    {
        if(s>10000)
            salary=s;
        else
            salary=10000;
    }

    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee e;

    e.setSalary(5000);

    cout<<"Salary = "<<e.getSalary();

    return 0;
}