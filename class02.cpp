// declaring variabl as public in class 

#include <iostream>
using namespace std;

class Human
{
    public:


    string s ;
    void humanprinter(){
       cout<< "name is "<< s <<endl;
    
    }
};

int main()
{

    Human humObj;

    humObj.s="dev";
    humObj.humanprinter();

    return 0;
}