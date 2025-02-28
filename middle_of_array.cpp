#include <iostream>
using namespace std;

void findMiddle(int arr[], int size) {
    if (size % 2 == 0) {
        cout << "Middle elements: " << arr[size / 2 - 1] << " and " << arr[size / 2] << endl;
    } else {
        cout << "Middle element: " << arr[size / 2] << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};  
    int size = sizeof(arr) / sizeof(arr[0]);

    findMiddle(arr, size);

    return 0;
}
