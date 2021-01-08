#include <iostream>
using namespace std;

class Shop_Item
{
    int id;
    float price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main()
{

    int size = 3;
    Shop_Item *ptr = new Shop_Item[size];
    Shop_Item *ptr_temp = ptr;

    int p;
    float q;
    for (size_t i = 0; i < size; i++)
    {
        cout << "Id and price of item " << i + 1 << " ";
        cin >> p >> q;
        ptr->setData(p, q);
        p++;
    }
    for (size_t i = 0; i < size; i++)
    {
        cout << "Item number " << i + 1 << endl;
        ptr_temp->getData();
        ptr_temp++;
    }

    return 0;
}