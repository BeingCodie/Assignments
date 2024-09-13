// call by refernce using pointer
#include <iostream>
using namespace std;

int changeA(int *ptr)
{
    *ptr = 20;            // using derefernce to change value at address of parameter
    cout << *ptr << endl; // *ptr = 20
}

int main()
{
    int a = 10;
    changeA(&a); // when we use address of parameter

    cout << a << endl; // value of a also change a = 20
    return 0;
}