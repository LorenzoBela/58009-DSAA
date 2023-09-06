#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    vector<int> numbers(arr, arr + sizeof(arr) / sizeof(arr[0]));

    cout << "Array: ";
    for (size_t i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    int array_length = numbers.size();
    cout << "Length of the array: " << array_length << endl;

    return 0;
}

