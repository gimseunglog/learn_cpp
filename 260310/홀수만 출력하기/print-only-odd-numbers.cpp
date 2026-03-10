#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int c;
    for(int i = 0; i < N; i++){
        cin >> c;
        if(c % 2 && c % 3 == 0){
            cout << c << endl;
        }
    }
    return 0;
}