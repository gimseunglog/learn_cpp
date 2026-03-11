#include <iostream>
using namespace std;

int main() {
    int a;
    int c = 1;
    for(int i = 0; i < 5; i++){
        cin >> a;
        if(a % 3){
            c = 0;
        }
    }
    cout << c;
    return 0;
}