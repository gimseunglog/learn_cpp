#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int s = 0;
    for(int i = A; i <= B; i++){
        s += i;
    }
    cout << s;
    return 0;
}