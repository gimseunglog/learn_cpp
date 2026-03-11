#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int n = A;
    for(int i = 1; i < B; i++){
        n *= A;
    }
    if(B == 0){
        n = 1;
    }
    cout << n;
    return 0;
}