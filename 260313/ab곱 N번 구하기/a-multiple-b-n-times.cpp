#include <iostream>
using namespace std;

int main() {
    int N;
    int a, b;
    int m;
    cin >> N;
    for(int i = 0; i < N; i++){
        m = 1;
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            m *= j;
        }
        cout << m << endl;
    }
    return 0;
}