#include <iostream>
using namespace std;

int main() {
    int a;
    int c3 = 0;
    int c5 = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
        if(a % 3 == 0){
            c3++;
        }
        if(a % 5 == 0){
            c5++;
        }
    }
    cout << c3 << ' ' << c5;
    return 0;
}