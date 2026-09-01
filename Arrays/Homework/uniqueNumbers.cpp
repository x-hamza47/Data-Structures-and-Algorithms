#include <iostream>

using namespace std;

int main(){

    int arr[] = {1, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (j == i) continue;
            if (arr[j] == arr[i]) count++;
        }
        if(count == 0){
            cout << arr[i] << " ";
        }

    }
    
    return 0;
}