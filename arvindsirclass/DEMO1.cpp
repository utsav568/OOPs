#include <Demo.h>
#include <iostream>
Demo::Demo(){
    std::cout<<"construtor called\n";
}
Demo::~Demo(){
    std::cout<<"Destructor called\n";
}
int main(){
    Demo D;
}