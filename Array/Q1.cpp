//create an array 
#include <iostream>
using namespace std;
int main()
{
    int num[10] = {1, 2, 3}; // size of array is 10 (indexing 0 to 9)
    cout << num[0] << endl;
    cout << num[1] << endl;
    cout << num[2] << endl;
    cout << num[3] << endl;         // 0 will be initialize to it 
    cout << sizeof(num) << endl; // 40 size print in bytes (int contains 4 bytes)
    return 0;
}
