#include <iostream>

using namespace std;

string A, B;

int main() {
    cin >> A;
    cin >> B;

    int idx = A.find('e');
    A.erase(idx, 1);
    cout << A;
    return 0;
}
