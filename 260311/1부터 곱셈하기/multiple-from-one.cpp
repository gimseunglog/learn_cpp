#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int m = 1;
    for(int i = 1; i <= 10; i++){
        m *= i;
        if(m >= N){
            cout << i;
            break;
        }
    }
    return 0;
}