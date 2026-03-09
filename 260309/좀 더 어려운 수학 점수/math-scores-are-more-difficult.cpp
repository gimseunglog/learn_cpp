#include <iostream>
using namespace std;

int main() {
    int Am, Ae;
    int Bm, Be;
    cin >> Am >> Ae;
    cin >> Bm >> Be;
    if(Am > Bm){
        cout << 'A';
    }
    else if(Am < Bm){
        cout << 'B';
    }
    else{
        if(Ae > Be){
            cout << 'A';
        }
        else{
            cout << 'B';
        }
    }
    return 0;
}