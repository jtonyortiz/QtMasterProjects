#include <iostream>

using namespace std;

int main()
{
    int a = 20;
    int b = 7;

    cout << "-------------Math Operators -------------- " << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << (float)a / b << endl;

    cout << "a % b = " << a % b << endl;

    if(a > b)
    {
        cout << "A is greater than B" << endl;
    }
    else
    {
        cout << "A is not greater than B" << endl;
    }



    return 0;
}
