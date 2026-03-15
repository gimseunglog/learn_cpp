#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int c = 0;
    while(A / B > 1){
        A /= B;
        c++;
    }
    cout << c;
    return 0;
}