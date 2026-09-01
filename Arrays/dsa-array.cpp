#include <iostream>
#include <climits>

using namespace std;

void smallestNumber(){
    int nums[] = {5, 15, 22, 1, -24, -15};

    int numSize = sizeof(nums) / sizeof(nums[0]);

    int smallest = INT_MAX;

    for (int i = 0; i < numSize; i++)
    {
        if (nums[i] < nums[smallest])
        {
            // smallest = min(nums[i], smallest);
            smallest = i;
        }
    }
    cout << "smallest = " << smallest << endl;
}

void largestNumber(){
    int nums[] = {5, 15, 22, 1, -15, -24};
    int numSize = sizeof(nums) / sizeof(nums[0]);
    int largest = INT_MIN;

    for (int i = 0; i < numSize; i++){
        // largest = max(nums[i], largest);
        if (nums[i] > largest) {
            largest = i;
        }
    }
    cout << "largest = " << largest << endl;
}

int main()
{

    // ! Finding Smallest Number in Array
    smallestNumber();
    

    // ! Finding Largest Number in Array
    largestNumber();
    return 0;
}