#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    for (int i = 1; i <= 10; i++) numbers.push_back(i);
    numbers.insert(numbers.begin() + 1, 99);

    cout << "Updated array:";
    for (size_t i = 0; i < numbers.size(); i++) cout << " " << numbers[i];
    cout << endl;

    return 0;
}

