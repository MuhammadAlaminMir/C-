#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (short i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    // Int
    vector<int> I1(3);
    I1.arr[0] = 1;
    I1.arr[1] = 2;
    I1.arr[2] = 3;

    vector<int> I2(3);
    I2.arr[0] = 1;
    I2.arr[1] = 2;
    I2.arr[2] = 3;
    int res = I1.dotProduct(I2);
    cout << res << endl;

    // float
    vector<float> f1(3);
    f1.arr[0] = 1.23;
    f1.arr[1] = 2.2;
    f1.arr[2] = 3.23;

    vector<float> f2(3);
    f2.arr[0] = 1.2;
    f2.arr[1] = 2.53;
    f2.arr[2] = 3.34;
    float res2 = f1.dotProduct(f2);
    cout << res2 << endl;

    return 0;
}