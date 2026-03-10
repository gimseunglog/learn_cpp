#include <iostream>
using namespace std;

int main() {
    int N, a;
    cin >> N >> a;
    int i = 1;
    while(i <= N){
        if(i % a == 0){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
        i++;
    }
    return 0;
}