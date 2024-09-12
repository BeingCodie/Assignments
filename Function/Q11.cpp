//print next character
#include<iostream>
using namespace std;

char printnextchar(char ch){
    if(ch == 'z'){
        return 'a';
    }else{
    return ch+1;
    }
}

int main(){
     cout<<printnextchar('a');
    return 0;
}