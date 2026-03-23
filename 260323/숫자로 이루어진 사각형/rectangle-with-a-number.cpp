#include <iostream>
using namespace std;

void printsq(int N){
    int num = 1;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << num << ' ';
            num++;
            if(num == 10){
                num = 1;
            }
        }
        cout << endl;
    }
}

int N;

int main() {
    cin >> N;
    printsq(N);
    return 0;
}