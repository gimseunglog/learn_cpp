#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a;
    for(int i = 0; i < N; i++){
        cin >> a;
        if(a % 2 == 0){
            cout << a << ' ';
        }
    }
    return 0;
}