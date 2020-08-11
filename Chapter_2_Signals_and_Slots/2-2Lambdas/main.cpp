#include <iostream>

using namespace std;

int main()
{
    /*
     * [capture list](parameter list) {function body}
     *
     */


    /*
     * //Give lambda option a name and call it:
    auto func = [](){
        cout << "Hello World" << endl;
    };

    func();
    */

    /*
     *
     * Call lambda function directly after definition:
    [](){
            cout << "Hello World" << endl;
        }();
     */

    //Define a labda function that takes parameters:

    [](int a, int b){
        cout << " a + b = " << a + b << endl;
    }(7, 3);

    //Define a labda that returns something:

    int sum  = [](int a, int b)->int{
        return a + b;
    }(7, 3);

    cout << "The sum is: " << [](int a, int b)->int{
        return a+b;
    }(7,3) << endl;

    int a = 7;
    int b = 3;
    [a,b]()
    {
       cout << "a + b is : " << a + b << endl;
    }();

    //Capturing by value:

    /*
    int c = 42;
    auto func = [c](){
        cout << "The inner value of c is: " << c << endl;
    };

    for(int i = 1; i < 5; i++){
        cout << "The outer value of c is : " << c << endl;
        func();
        c++;
    }
    */

    //Caputing by reference:
    /*
    int c = 42;
    auto func = [&c](){
        cout << "The inner value of c is: " << c << endl;
    };

    for(int i = 1; i < 5; i++){
        cout << "The outer value of c is : " << c << endl;
        func();
        c++;
    }
    */

    int c = 42;
    int d = 6;
    auto func = [&](){
        cout << "The inner value of c is: " << c << endl;
        cout << "the inner value of d is: " << d << endl;
    };

    for(int i = 1; i < 5; i++){
        cout << "The outer value of c is : " << c << endl;
        func();
        c++;
    }



    return 0;
}
