#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    int p, m;
    p = (int)a + (int)b;
    m = (int)a - (int)b;
    if(m < 0){
        m *= -1;
    }
    cout << p << ' ' << m;
    return 0;
}
