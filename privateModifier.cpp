// private modifier
#include <iostream>
using namespace std;

class Human
{

    private:
    string name ;
    int age;


    public:

    void setAge (int value){
        age= value;
    }


    void humanprinter(){
        name = "dev";
       cout<< "name is "<< name  << " age is : " << age <<endl;
    
    }
};

int main()
{

    Human humObj;

    // humObj.name="dev";   cant be possible becoz , name is private 
    humObj.setAge(12);
    humObj.humanprinter();

    return 0;
}