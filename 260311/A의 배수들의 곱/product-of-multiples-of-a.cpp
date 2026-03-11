#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int c = 1;
    for(int i = 1; i <= B; i++){
        if(i % A == 0){
            c *= i;
        }
    }
    cout << c;
    return 0;
}