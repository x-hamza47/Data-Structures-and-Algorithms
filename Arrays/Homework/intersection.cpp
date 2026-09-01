#include <iostream>
using namespace std;

int main(){
    int arr1[] = {1, 2, 3, 4, 4, 5, 6};
    int arr2[] = {4, 5, 6, 7, 4, 9};
    int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2Size = sizeof(arr2) / sizeof(arr2[0]);

    for (int i = 0; i < arr1Size; i++) {
        for (int j = 0; j < arr2Size; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " " ;
                break;
            };
        }
    }
    return 0;
}