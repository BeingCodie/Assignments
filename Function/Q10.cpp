//program to print a^2 + b^2 +2ab
#include <iostream>
using namespace std;
int formula(int a , int b ){
    int res= a * a + b * b + 2 * a * b ;
    cout<<"a^2 + b^2 + 2*ab is ="<< res << endl;
}

int main()
{
   formula(2,3);
   return 0;
}