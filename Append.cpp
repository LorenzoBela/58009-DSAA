#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers(11);
    for (int i = 1; i <= 11; i++)
        numbers[i - 1] = i;
    
    cout << "Updated vector:";
    for (int i = 0; i < numbers.size(); i++)
        cout << " " << numbers[i];
    
    cout << endl;
    return 0;
}

