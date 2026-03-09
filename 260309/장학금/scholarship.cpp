#include <iostream>
using namespace std;

int main() {
    int f, s;
    cin >> f >> s;
    int m = 0;
    if(f >= 90){
        if(s >= 95){
            m = 100000;
        }
        else if(s >= 90){
            m = 50000;
        }
    }
    cout << m;
    return 0;
}