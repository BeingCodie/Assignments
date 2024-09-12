//sum of the digit of entered number
#include<iostream>
using namespace std;
    int dig(int n){
        int res=0;
        while(n>0){
        int lastdig= n%10;
        res= res + lastdig;
        n=n/10;
        }
     return res;
    }
int main(){
    int num =121;
    cout<<"sum of "<<num<<" is "<<dig(num)<<endl;
    return 0;
}
