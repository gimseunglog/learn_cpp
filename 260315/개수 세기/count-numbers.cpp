#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int a;
    int c = 0;
    for(int i = 0; i < N; i++){
        cin >> a;
        if(a == M){
            c++;
        }
    }
    cout << c;
    return 0;
}