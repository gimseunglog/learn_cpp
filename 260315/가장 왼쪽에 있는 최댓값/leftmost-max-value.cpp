#include <iostream>

using namespace std;

int N;
int a[1000];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    int j = N;
    int n;
    while(1){
        int max = 0; 
        for(int i = 0; i < j; i++){
            if(a[i] > max){
                max = a[i];
                n = i;
            }
        }
        j = n;
        cout << n + 1 << ' ';
        if(n == 0){
            break;
        }
    }

    return 0;
}
