//Array passed by refernce (for function )
#include <iostream>
using namespace std;
void print(int arr[]){
 arr[0]= 100;       // value changes at 0 index also changes in original value because here array is passed by reference .
}

int main(){

    int arr[]={1 , 2 , 3, 4 ,5};
    print(arr) ;                // function called
    cout<< arr[0]<< endl;       // here value is changes to 100. cuz value at address is chnaged .
    return 0;
}