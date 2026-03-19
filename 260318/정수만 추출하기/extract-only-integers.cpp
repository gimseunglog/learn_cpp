#include <iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    int Alen = A.length();
    int Blen = B.length();
    int sum = 0;
    int i;
    for(i = 0; i < Alen; i++){
        if(!isdigit(A[i])){
            sum += stoi(A.substr(0, i));
            break;
        }
    }
    if(i == A.length()) {
        sum += stoi(A);
    }
    for(i = 0; i < Blen; i++){
        if(!isdigit(B[i])){
            sum += stoi(B.substr(0, i));
            break;
        }
    }
    if(i == B.length()) { // 전부 숫자인 경우
        sum += stoi(B);
    }
    cout << sum;
    return 0;
}
