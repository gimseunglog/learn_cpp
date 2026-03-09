#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m;
    if(n < 8){
        if(n % 2){
            m = 31;
        }
        else if(n != 2){
            m = 30;
        }
        else{
            m = 28;
        }
    }
    else{
        if(n % 2 == 1){
            m = 31;
        }
        else{
            m = 30;
        }
    }
    cout << m;
    return 0;
}