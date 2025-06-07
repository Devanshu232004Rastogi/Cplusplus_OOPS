//  scope resolution ( :: )
#include <iostream>



using namespace std;

class Human
{
public:
    string s;
    void humPrinter();
};

// use of scope resolution operation , is to resolve scope of function outside class , and variables also , onlyif they are static

// functionReturnType className :: functionDefination

void Human::humPrinter()
{
    cout << Human::s << endl;
}

int main()
{

    Human *humObj = new Human();
    humObj->s = "dev";
    humObj->humPrinter();
}