#include <iostream>
void f(){
    std::cout<<"1"<<std::endl;
    f();
}
int main(){
    f();
    return 0;
}