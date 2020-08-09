#include <iostream>
#include <string>
using namespace std;

int main()
{
    string hello = "Hello World";
    int count = 7;

    cout << "The message is: " << hello << endl;
    cout << "The count is: " << count << endl;

    cout << "The size of an int is: " << sizeof (int) << endl;
    cout << "The size of an char is: " << sizeof (char) << endl;
    cout << "The size of an bool is: " << sizeof (bool) << endl;
    cout << "The size of an float is: " << sizeof (float) << endl;
    cout << "The size of an double is: " << sizeof (double) << endl;
    cout << "The size of an wchar is: " << sizeof (wchar_t) << endl;

    unsigned int var1 = -200;

    cout << "Var 1 is : " << var1 << endl;

    return 0;
}
