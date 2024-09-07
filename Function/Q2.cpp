//Finf the given number is prime or not 
#include<iostream>
using namespace std;
        //logic1
bool isPrime(int n) {
    if(n == 1){
        return false;
    }
    for(int i=2; i<=n-1; i++){
        if( n % i ==0){
            return false;
        }
    }
    return true;
}
            //Logic 2
bool isPrime2(int n){
    if(n ==1){
        return false;
    }
    for(int j=2; j*j<=n; j++){
        if(n % j == 0){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<isPrime2(4)<<endl;
    return 0;

}