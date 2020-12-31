// A member function can call another member function of the same class directly without using the dot operator. This is called as nesting of member functions.

#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string s;
    void check_Binary(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void Binary::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
    check_Binary(); // Nesting of member functions
}

void Binary::check_Binary(void)
{
    for (short i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void Binary::ones_compliment(void)
{
    for (short i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}
void Binary::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (short i = 0; i < s.length(); i++)
    {
        cout << s[i] << endl;
    }
    cout << endl;
}

int main()
{
    Binary bin;
    bin.read();
    bin.display();
    bin.ones_compliment();
    bin.display();

    return 0;
}