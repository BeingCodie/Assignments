//check if a given number is Palindrome or not
#include<iostream>
using namespace std;
            //reverse the number
int reverse(int n){
    int res=0;
    while(n>0){
        int lastdig = n % 10;
        res = res*10 + lastdig ;
        n = n / 10;
    }
    return res;
}
            //Compare reversed num and original num
bool isPalindrome(int num){
    int revNum = reverse(num);
    return num == revNum;
}

int main(){
    int num=121;
    if(isPalindrome(num)){
        cout<<num <<" is palindrome"<< endl;
    }else{
        cout<<num << " is not palindrome"<< endl;
    }

    return 0;
}