#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    for(int i = A + 1; i <= B; i++){
        A *= i;
    }
    cout << A;
    return 0;
}