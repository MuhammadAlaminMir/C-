#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter = 0;

public:
    void initCounter(void) { counter = 0; }
    void setItem(void);
    void displayItems(void);
};

void Shop::setItem(void)
{
    cout << "Enter the Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item no " << counter + 1 << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayItems(void)
{

    for (short i = 0; i < counter; i++)
    {
        cout << "The Price of the itemid " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop alaminStore;
    alaminStore.initCounter();
    alaminStore.setItem();
    alaminStore.setItem();
    alaminStore.setItem();
    alaminStore.displayItems();

    return 0;
}