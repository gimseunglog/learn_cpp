#include <iostream>
using namespace std;

int main() {
    int a;
    int c = 0;
    cin >> a;
    int p = a;
    while(c < 2){
        cout << a << ' ';
        if(a % 5 == 0){
            c++;
        }
        a += p;
    }
    return 0;
}