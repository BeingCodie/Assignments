// find min and max number in array
#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {5, 6, 3, 2, 8};
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "max is = " << max << endl;
    cout << "min is = " << min << endl;

    return 0;
}