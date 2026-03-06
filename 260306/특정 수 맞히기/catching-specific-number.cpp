#include <iostream>
using namespace std;

int main() {
    int i;
    while(1){
        cin >> i;
        if(i == 25){
            cout << "Good";
            break;
        }
        else if(i > 25){
            cout << "Lower" << endl;
        }
        else{
            cout << "Higher" << endl;
        }
    }
    return 0;
}