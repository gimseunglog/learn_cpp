#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    if(A > B){
        int tmp = A;
        A = B;
        B = tmp;
    }
    int s = 0;
    for(int i = A; i <= B; i++){
        if(i % 5 == 0){
            s += i;
        }
    }
    cout << s;
    return 0;
}