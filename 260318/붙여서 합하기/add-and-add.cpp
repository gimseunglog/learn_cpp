#include <iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int sum = stoi(A + B) + stoi(B + A);
    cout << sum;
    return 0;
}
