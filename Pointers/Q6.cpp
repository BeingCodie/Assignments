// pass by refence using reference variable 
#include<iostream>
using namespace std;
void change(int &b){
    b = 20 ;
    cout<< b << endl;
}
int main(){
    int a = 10;
    change(a);
    cout << a << endl;
    
    return 0;
}
   