#include <iostream>
using namespace std;

int main() {
    int d[6];
    for(int i = 0; i < 6; i++){
        d[i] = 0;
    }
    int n;
    for(int i = 0; i < 10; i++){
        cin >> n;
        d[n - 1]++;
    }
    for(int i = 0; i < 6; i++){
        cout << i + 1 << " - " << d[i] << endl;
    }
    return 0;
}