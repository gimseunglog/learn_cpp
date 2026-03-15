#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int c = 0;
    int a;
    for(int i = 0; i < N; i++){
        cin >> a;
        if(a == 2){
            c++;
        }
        if(c == 3){
            cout << i + 1;
            break;
        }
    }
    return 0;
}