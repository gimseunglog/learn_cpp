#include <iostream>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for(int i = 0; i < N; i++){
        for(int j = 1; j < N - i; j++){
            if(A[j] > A[j - 1]){
                int tmp = A[j];
                A[j] = A[j - 1];
                A[j - 1] = tmp;
            }
        }
    }

    cout << A[0] << ' ' << A[1];

    return 0;
}
