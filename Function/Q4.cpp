//Functionn= overloading 
#include<iostream>
using namespace std;

int sum(int a, int b) {         //return type of parameter is different in 1st
    cout<<(a+b)<< endl;
    return a + b ;
}

double sum(double a, double b) {        //return type of parameter is different in 2nd but sum function is used in both 
    cout<<(a+b) << endl;
    return a + b;    
}

int sum( int a, int b, int c){
    cout<<(a+b+c) << endl;
    return a + b + c;
}

int main(){
    sum(1 , 2);
    sum(1.5 ,3.5);
    sum(1 , 2 , 3);
    return 0;
}