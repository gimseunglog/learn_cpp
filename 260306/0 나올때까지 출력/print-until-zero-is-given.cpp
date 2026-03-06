#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int a[100];
    int c = 0;
    while(1){
        cin >> i;
        if(i == 0){
            break;
        }
        a[c] = i;
        c++;
    }
    for(int j = 0; j < c; j++){
        cout << a[j] << endl;
    }
    return 0;
}