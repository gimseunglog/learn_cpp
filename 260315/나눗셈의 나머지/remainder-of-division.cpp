#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int a[10];
    for(int i = 0; i < 10; i++){
        a[i] = 0;
    }
    int rm;
    while(1){
        rm = A / B;
        a[A % B]++;
        A /= B;        
        if(rm <= 1){
            break;
        }
    }
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum += a[i] * a[i];
    }
    cout << sum;
    return 0;
}