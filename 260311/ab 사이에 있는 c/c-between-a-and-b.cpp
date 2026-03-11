#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int id = 1;
    for(int i = a; i <= b; i++){
        if(i % c == 0){
            cout << "YES";
            id = 0;
            break;
        }
    }
    if(id){
        cout << "NO";
    }
    return 0;
}