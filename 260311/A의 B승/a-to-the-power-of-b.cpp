#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int n = A;
    for(int i = 1; i < B; i++){
        n *= A;
    }
    cout << n;
    return 0;
}