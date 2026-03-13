#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    for(int i = 2; i <= 8; i += 2){
        for(int j = B; j >= A; j--){
            cout << j << " * " << i << " = " << j * i;
            if(j != A){
                cout << " / ";
            }
        }
        cout << endl;
    }
    return 0;
}