#include <iostream>
using namespace std;

int main() {
    int g;
    int y;
    cin >> g >> y;
    if(g == 0){
        if(y >= 19){
            cout << "MAN";
        }
        else{
            cout << "BOY";
        }
    }
    else if(g == 1){
        if(y >= 19){
            cout << "WOMAN";
        }
        else{
            cout << "GIRL";
        }
    }
    return 0;
}