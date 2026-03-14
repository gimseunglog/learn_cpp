#include <iostream>
using namespace std;

int main() {
    int a;
    int even = 0;
    int odd = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
        if(i % 2){
            odd += a;
        }
        else{
            even += a;
        }
    }
    if(even > odd){
        cout << even - odd;
    }
    else{
        cout << odd - even;
    }
    return 0;
}