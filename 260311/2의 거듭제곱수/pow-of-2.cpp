#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int x = 1;
    int j = 2;
    while(N != j){
        j *= 2;
        x++;
    }
    cout << x;
    return 0;
}