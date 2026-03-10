#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int s = 0;
    int a;
    for(int i = 0; i < N; i++){
        cin >> a;
        if(a % 2 && a % 3 == 0){
            s += a;
        }
    }
    cout << s;
    return 0;
}