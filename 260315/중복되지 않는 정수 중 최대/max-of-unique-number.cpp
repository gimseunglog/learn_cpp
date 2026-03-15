#include <iostream>

using namespace std;

int N;
int a[1000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    int max = -1;

    for(int i = 0; i < N; i++){
        int cnt = 0;
        for(int j = 0; j < N; j++){      
            if(a[i] == a[j]){
                cnt++;
            }
        } 
        if(cnt == 1 && a[i] > max){
            max = a[i];
        }
    }
    cout << max;

    return 0;
}
