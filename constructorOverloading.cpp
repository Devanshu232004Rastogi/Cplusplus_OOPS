// overlaoding constructor
#include <iostream>
using namespace std;

class Human
{

    private:
    string name ;
    int age;


    public:
    Human(){
        age = 0;
        name = "none";
        cout<< "name is : "<< name << "    age is : " << age <<endl;
    }
    Human(int a ){
        age = a;
        name = "none";
        cout<< "Parametrised Const. with age "<<  "name is : "<< name << "    age is : " << age <<endl;
    }
    Human(string s ){
        age = 0;
        name = s;
        cout<< "Parametrised Const. with name "<<  "name is : "<< name << "    age is : " << age <<endl;
    }
    Human(string s  , int a){
        age = a;
        name = s;
        cout<< "Parametrised Const. with age  and name"<<  "name is : "<< name << "    age is : " << age <<endl;
    }
    
};

int main()
{

    Human humObj;


    Human humObj1(18);
    Human humObj2("dev");
    Human humObj3( "dev",21);
    // humObj.name="dev";   cant be possible becoz , name is private 
   

    return 0;
}