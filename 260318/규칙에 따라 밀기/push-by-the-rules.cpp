#include <iostream>
using namespace std;

int main() {
    string A, Q;
    cin >> A >> Q;
    int Qlen = Q.length();
    int Alen = A.length();
    for(int i = 0; i < Qlen; i++){
        if(Q[i] == 'L'){
            A = A.substr(1) + A[0];
        }
        else if(Q[i] == 'R'){
            A = A[Alen - 1] + A.substr(0, Alen - 1);
        }
    }
    cout << A;
    return 0;
}
