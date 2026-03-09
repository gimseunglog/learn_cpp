#include <iostream>
using namespace std;

int main() {
    int Am, Ae;
    int Bm, Be;
    cin >> Am >> Ae;
    cin >> Bm >> Be;
    cout << ((Am > Bm) && (Ae > Be));
    return 0;
}