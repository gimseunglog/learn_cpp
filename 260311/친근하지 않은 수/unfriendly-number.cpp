#include <iostream>
using namespace std;

int main() {
    int N;
    int c = 0;
    cin >> N;
    for(int i = 1; i <= N; i++){
        if(i % 2 && i % 3 && i % 5){
            c++;
        }
    }
    cout << c;
    return 0;
}