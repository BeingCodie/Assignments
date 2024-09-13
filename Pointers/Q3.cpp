//Derefencer pointer
#include<iostream>
using namespace std;
int main(){
int a=10;
int *ptr = &a;
cout<< *ptr << endl;                        //show the value of a = 10
            //we can also change value 
*ptr = 20 ;
cout<< a <<endl;                             //shows a = 20
return 0;

}