#include <iostream>
using namespace std;

int main() {
    int a;
    int n;
    while(1){
        cin >> a;
        if(a == 0){
            break;
        }
        else{
            if(a % 2){
                cout << a + 3 << ' ';
            }
            else{
                cout << a / 2 << ' ';
            }
        }
    }
    return 0;
}