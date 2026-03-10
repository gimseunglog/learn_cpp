#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int max, min;
    if(A > B){
        max = A;
        min = B;
    }
    else{
        max = B;
        min = A;
    }
    for(int i = max; i >= min; i--){
        cout << i << ' ';
    }
    return 0;
}