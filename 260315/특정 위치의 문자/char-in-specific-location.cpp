#include <iostream>
using namespace std;

int main() {
    char a[6] = {'L', 'E', 'B', 'R', 'O', 'S'};
    char c;
    cin >> c;
    int j = 1;
    for(int i = 0; i < 6; i++){
        if(a[i] == c){
            cout << i;
            c = 0;
        }
    }
    if(c){
        cout << "None";
    }
    return 0;
}