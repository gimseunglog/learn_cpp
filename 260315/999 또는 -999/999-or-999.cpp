#include <iostream>
using namespace std;

int main() {
    int a[100];
    int c;
    for(int i = 0; i < 100; i++){
        cin >> a[i];
        if(a[i] == 999 || a[i] == -999){
            c = i;
            break;
        }
    }
    int max = a[0];
    int min = a[0];
    for(int i = 1; i < c; i++){
        if(a[i] > max){
            max = a[i];
        }
        if(a[i] < min){
            min = a[i];
        }
    }
    cout << max << ' ' << min;
    return 0;
}