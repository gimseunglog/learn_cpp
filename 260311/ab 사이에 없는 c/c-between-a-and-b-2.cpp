#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int i = 0;
    for(int j = a; j <= b; j++){
        if(j % c == 0){
            i = 1;
            cout << "NO";
            break;
        }
    }
    if(!i){
        cout << "YES";
    }
    return 0;
}