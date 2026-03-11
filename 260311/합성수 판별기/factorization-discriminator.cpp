#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    char c = 'N';
    for(int i = 2; i <= (N - 1); i++){
        if(N % i == 0){
            c = 'C';
            break;
        }
    }
    cout << c;
    return 0;
}