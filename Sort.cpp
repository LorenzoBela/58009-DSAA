#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    reverse(arr, arr + 5);

    cout << "Reversed array:";
    for (int i = 0; i < 5; i++) {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}

