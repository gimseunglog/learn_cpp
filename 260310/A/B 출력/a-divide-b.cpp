#include <iostream>
using namespace std;

int main() {

    int A, B;
    cin >> A >> B;

    cout << A / B << '.';

    int r = A % B;

    for(int i = 0; i < 20; i++){
        r *= 10;
        cout << r / B;
        r %= B;
    }

}
