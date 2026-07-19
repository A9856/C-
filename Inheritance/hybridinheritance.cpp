/*Hybrid Inheritance

Hybrid Inheritance is a type of inheritance that combines two or more types of inheritance, such as Multiple and Multilevel Inheritance, into a single program.
Hybrid Inheritance वह प्रकार है जिसमें दो या दो से अधिक प्रकार की Inheritance (जैसे Multiple और Multilevel) को मिलाकर एक ही Program में उपयोग किया जाता है।

Combination of Different Types of Inheritance
दो या अधिक Inheritance Types का Combination */

#include<iostream>
using namespace std;

class Student
{
public:
    void studentInfo()
    {
        cout<<"Student Details"<<endl;
    }
};

class Sports : public Student
{
public:
    void sportsMarks()
    {
        cout<<"Sports Marks Added"<<endl;
    }
};

class Academic
{
public:
    void academicMarks()
    {
        cout<<"Academic Marks Added"<<endl;
    }
};

class Result : public Sports, public Academic
{
public:
    void finalResult()
    {
        cout<<"Final Result Prepared"<<endl;
    }
};

int main()
{
    Result r;

    r.studentInfo();
    r.sportsMarks();
    r.academicMarks();
    r.finalResult();

    return 0;
}