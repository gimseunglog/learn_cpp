#include <iostream>
using namespace std;

int main() {
    int h, l;
    char c;
    while(1){
        cin >> h >> l >> c;
        cout << h * l << endl;
        if(c == 'C'){
            break;
        }
    }
    return 0;
}