#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int c = 0;
    for(int i = A; i <= B; i++){
        if(1920 % i == 0 && 2880 % i == 0){
            c = 1;
            break;
        }
    }
    cout << c;
    return 0;
}