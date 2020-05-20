#include <iostream>

using namespace std;

int main()
{
    int a = 1;
    int& b = a;
    int& c = b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}
