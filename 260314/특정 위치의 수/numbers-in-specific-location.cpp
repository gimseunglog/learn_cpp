#include <iostream>
using namespace std;

int main() {
    int a;
    int sum = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
        if(i == 2 || i == 4 || i == 9){
            sum += a;
        }
    }
    cout << sum;
    return 0;
}