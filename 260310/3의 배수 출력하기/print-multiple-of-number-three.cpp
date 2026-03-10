#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int i = 3;
    while(i <= N){
        cout << i << ' ';
        i += 3;
    }
    return 0;
}