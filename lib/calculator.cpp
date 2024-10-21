#include <iostream>

int Add(int x, int y){
    return x + y;
}

int Sub(int x, int y){
    return x - y;
}

float Divide(float f1, float f2){
    if(f2 == 0){
        throw -1;
    }
    return f1/f2;
}

void OutputMessage(std::string message){
    std::cout << message << std::endl;
}