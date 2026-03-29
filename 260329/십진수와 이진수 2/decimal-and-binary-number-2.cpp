#include <iostream>
using namespace std;


int main() {
    string n;
    int arr[10];
    int cnt = 0;
    int num = 0;

    cin >> n;

    for(int i = 0; i < (int) n.size(); i++){
        num = num * 2 + (n[i] - '0');
    }

    num *= 17;

    while(true){
        if(num < 2){
            arr[cnt++] = num;
            break;
        }
        arr[cnt++] = num % 2;
        num /= 2;
    }

    for(int i = cnt - 1; i >= 0; i--){
        cout << arr[i];
    }
    return 0;
}