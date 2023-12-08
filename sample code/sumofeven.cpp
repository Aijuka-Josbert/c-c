//c++ program the find the sum of all even numbers 1 - 100

#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}

