#include <iostream>
using namespace std;

int main() {
    int M;
    cin >> M;
    int N;
    int c = 0;
    for(int i = 0; i < M; i++){
        cin >> N;
        c = 0;
        while(N != 1){
            if(N % 2){
                N = 3 * N + 1;
            }
            else{
                N /= 2;
            }
            c++;
        }
        cout << c << endl;
    }
    return 0;
}