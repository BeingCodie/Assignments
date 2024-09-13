//Argument pass by value
#include<iostream>
using namespace std;
    int changeA(int a){
        a = 20;
        cout << a << endl;          // value of argument is changed a = 20
    }

    int main(){
        int a = 10;
        changeA(a);
        cout << a << endl;             // value of parameter remains same a = 10
        return 0;                       // call by value do not chnage parameter's value

    }