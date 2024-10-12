#include <iostream>
using namespace std;

int main()
{
    int a, *p, *q;
    int b = 10;

    a = 25;
    q = &b;

    cout << "nilai a = " << a << endl;
    cout << "nilai a+b = " << a + b << endl;
    cout << "nilai q = " << *q << endl;
}