// Creating Objects from a Class in Different Ways 


#include<iostream>
using namespace std;


class Human{
public:
string name ;
void printHumanDetail(){
    cout<<name<<endl;
}

};


int main (){

    // using new keyword , to create object , and it will be assigned in head memory

    Human *humObj = new Human();

    // to access member , we use "->" operator

    humObj->name="dev";
    humObj->printHumanDetail();
    return 0;
}