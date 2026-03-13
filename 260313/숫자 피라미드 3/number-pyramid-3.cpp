#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        int sum = i;
        for(int j = 0; j < i; j++){
            cout << sum << ' '; 
            sum += i;
        }
        cout << endl;
    }
    return 0;
}