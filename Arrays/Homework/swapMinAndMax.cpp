#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,4, 2, 7, 8, 1,  5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallest = 0;
    int largest = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[smallest]){
            smallest = i;
        }
        if (arr[i] > arr[largest]) {
            largest = i;
        }
    }

    swap(arr[smallest], arr[largest]);


    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}