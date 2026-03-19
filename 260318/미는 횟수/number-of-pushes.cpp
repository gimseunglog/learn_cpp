#include <iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int len = A.length();
    int N = -1;
    for(int i = 0; i < len; i++){
        A = A[len - 1] + A.substr(0, len - 1);
        if(A == B){
            N = i + 1;
            break;
        }
    }
    cout << N;
    return 0;
}
