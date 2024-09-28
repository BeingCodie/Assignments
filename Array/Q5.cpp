//print the array using function
#include <iostream>
using namespace std;

int printarr(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    printarr(arr, n);
    return 0;
}
