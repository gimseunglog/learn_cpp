#include <iostream>
using namespace std;

int main() {
    int n;
    int c = 0;
    while(c < 3){
        cin >> n;
        if(n % 2 == 0){
            cout << n / 2 << endl;
            c++;
        }
    }
    return 0;
}