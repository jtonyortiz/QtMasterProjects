#include <iostream>

using namespace std;

void sayHi()
{
    cout << "Hello World!" << endl;
}

int summation(int a, int b)
{
    return a + b;
}

double summation(double a, double b){
    return a + b;
}

float summation(float a, float b){
    return a + b;
}

int main()
{
    sayHi ();
    sayHi ();
    sayHi ();

    cout << "The sum of 3 and 7 is: " << summation(3.35, 7.2) << endl;
    return 0;
}
