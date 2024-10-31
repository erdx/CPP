#include <iostream>
using namespace std;

int main(){
    int a=10;
    int b= 20;

    int* ptrA = &a;
    int *ptrB= &b;


    cout << &a << "--->"<<a <<"--"<< ptrA <<endl;
    cout << &b << "--->"<<b <<"--"<< ptrB <<endl;


    cout << *&*&*ptrA <<endl;
}