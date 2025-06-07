// cpnstructors basic
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


     Human(){
        name = "dev";
       cout<< "name is "<< name   <<endl;
    
    }
};

int main()
{

    Human humObj;

    // humObj.name="dev";   cant be possible becoz , name is private 
    humObj.setAge(12);

    return 0;
}