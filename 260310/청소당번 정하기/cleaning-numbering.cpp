#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 0;
    int a = 0;
    int t = 0;
    for(int i = 1; i <= n; i++){
        if(i % 12 == 0){
            t++;
        }
        else if(i % 3 == 0){
            a++;
        }
        else if(i % 2 == 0){
            c++;
        }
    }
    cout << c << ' ' << a << ' ' << t;
    return 0;
}