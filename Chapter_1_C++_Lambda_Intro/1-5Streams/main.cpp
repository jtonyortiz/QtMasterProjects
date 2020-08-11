#include <iostream>
#include <string>

using namespace std;

int main()
{
    //1.Cout:
    cout << "Hello World!" << endl;

    //2. cerr:
    std::cerr << "There was an error" << std::endl;

    //3.clog:
    std::clog << "This is a log method" << std::endl;

   //4.cin:
    string name;
    std::cout << "Please type in your first name: ";
    std::cin >> name;

    std::cout << "Your first name is: " << name << endl;


    return 0;
}
