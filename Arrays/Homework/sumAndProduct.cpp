#include <iostream>

using namespace std;

int main(){
    // Summ of all array
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    cout<< "Sum of an array is: " <<  sum << endl;

    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }

    cout << "Product of an array is: " << product << endl;
    return 0;
}