#include <iostream>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int min = A[0];
    for(int i = 1; i < N; i++){
        if(A[i] < min){
            min = A[i];
        }
    }

    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(A[i] == min){
            cnt++;
        }
    }

    cout << min << ' ' << cnt;

    return 0;
}
