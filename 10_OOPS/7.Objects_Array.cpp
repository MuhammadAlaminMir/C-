#include <iostream>
using namespace std;

class Students
{
    int id;
    int cost;

public:
    void setId()
    {
        cost = 500;
        cout << " Enter the id of Strudent " << endl;
        cin >> id;
    }
    void getId()
    {
        cout << " The id of this student  is " << id << endl;
    }
};

int main()
{
    // Students alamin, rakib, sihab;
    // alamin.setId();
    // alamin.getId();

    // Use array for multiple objects
    Students GAI[5];

    for (short i = 0; i < 5; i++)
    {

        GAI[i].setId();
        GAI[i].getId();
    }

    return 0;
}