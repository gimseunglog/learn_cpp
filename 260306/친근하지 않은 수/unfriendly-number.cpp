#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int C = 0;
    for(int i = 1; i <= N ; i++){
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0){
            continue;
        }
        C++;
    }
    cout << C;
    return 0;
}