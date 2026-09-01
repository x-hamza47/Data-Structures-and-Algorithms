#include <iostream>
#include <utility>
using namespace std;

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < arrSize / 2; i++)
    {
        swap(arr[i], arr[arrSize - i - 1]);
    }

    // int start = 0;
    // int end = arrSize - 1;

    // while (start < end)
    // {
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }
    

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}