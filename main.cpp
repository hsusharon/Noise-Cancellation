#include <iostream>
#include <list>
#include <string>
#include "lib/calculator.h"
using namespace std;


void function1(){
    cout <<"Function 1" << endl;
}
void functin2(){
    cout << "Function 2" << endl;
}

class Cat{
    public:
        string Name;
        int Age;
        string Color;
        Cat(string name, int age, string color);
        string GetInfo();
};


Cat::Cat(string name, int age, string color){
    Name = name;
    Age = age;
    Color = color;
}

string Cat::GetInfo(){
    auto text = "Name:" + Name + " Age:" + std::to_string(Age) + " Color:" + Color;
    return text;
}

int main() {

    Cat Duncan("Duncan", 10, "Black and white");
    cout << Duncan.GetInfo() << endl;


    return 0;
}