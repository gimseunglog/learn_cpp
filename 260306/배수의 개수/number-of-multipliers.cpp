#include <iostream>
using namespace std;

int main() {
    int A[10];
    int C3 = 0;
    int C5 = 0;
    for(int i = 0; i < 10; i++){
        cin >> A[i];
        if(A[i] % 3 == 0){
            C3++;
        }
        if(A[i] % 5 == 0){
            C5++;
        }
    }
    cout << C3 << " " << C5;
    return 0;
}