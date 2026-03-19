#include <iostream>
using namespace std;

int main() {
    string A;
    cin >> A;
    int len = A.length();
    int sum = 0;
    for(int i = 0; i < len; i++){
        if(isdigit(A[i])){
            sum += (int)A[i] - ((int)'0' - 0);
        }
    }
    cout << sum;
    return 0;
}
