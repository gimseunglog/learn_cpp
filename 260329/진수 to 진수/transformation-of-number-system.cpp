#include <iostream>
using namespace std;


int main() {
    int A, B;
    string N;
    int n[35];
    int cnt = 0;
    int num = 0;

    cin >> A >> B;
    cin >> N;

    for(int i = 0; i < (int) N.size(); i++){
        num = num * A + (N[i] - '0');
    }

    while(true){
        if(num < B){
            n[cnt++] = num % B;
            break;
        }
        n[cnt++] = num % B;
        num /= B;
    }

    for(int i = cnt - 1; i >= 0; i--){
        cout << n[i];
    }

    return 0;
}