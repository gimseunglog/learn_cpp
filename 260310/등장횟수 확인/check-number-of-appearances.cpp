#include <iostream>
using namespace std;

int main() {
    int a;
    int c = 0;
    for(int i = 0; i < 5; i++){
        cin >> a;
        if(a % 2 == 0){
            c++;
        }
    }
    cout << c;
    return 0;
}