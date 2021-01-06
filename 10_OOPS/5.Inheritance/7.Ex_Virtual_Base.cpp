#include <iostream>
using namespace std;

/* 
    Inheritance:
    Student -> test
    Student -> sports
    test -> result
    sports -> result
 */

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "The student roll number is " << roll_no << endl;
    }
};

class Tests : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        maths = m2;
    }
    void print_marks()
    {
        cout << "Your result is " << endl
             << "Maths  " << maths << endl
             << "Physics " << maths << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Tests, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    Result alamin;
    alamin.set_number(23);
    alamin.set_marks(83.2, 94.4);
    alamin.set_score(9);
    alamin.display();

    return 0;
}