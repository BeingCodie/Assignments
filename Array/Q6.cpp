// Linear Search
#include <iostream>
using namespace std;
int linearsrch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 5, 7, 8, 10, 12, 15, 19};
    int n = sizeof(arr) / sizeof(int);
    cout<<linearsrch(arr, n, 12)<<endl;
    return 0;
}