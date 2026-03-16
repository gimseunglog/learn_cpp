#include <iostream>
using namespace std;

int main() {
    char c[5][3];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            cin >> c[i][j];
        }
    }
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            cout << (char)(c[i][j] - ('a' - 'A')) << ' ';
        }
        cout << endl;
    }
    return 0;
}