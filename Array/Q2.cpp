#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin >> n;
    int num[n];
    //entering value of array 
    for ( int i = 0 ; i < n ; i ++){
        cin >> num[i] ;
    }
    // printing value off array
    for (int i = 0; i <= n - 1; i++){
        cout << num[i] << ",";
    }
    cout << sizeof(num) << endl;
    return 0;
}
