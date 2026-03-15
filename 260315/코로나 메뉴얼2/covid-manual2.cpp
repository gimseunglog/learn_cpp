#include <iostream>
using namespace std;

int main() {
    int a[4];
    for(int i = 0; i < 4; i++){
        a[i] = 0;
    }
    char c;
    int t;
    for(int i = 0; i < 3; i++){
        cin >> c >> t;
        if(c == 'Y'){
            if(t >= 37){
                a[0]++;
            }
            else{
                a[2]++;
            }
        }
        else if(c == 'N'){
            if(t >= 37){
                a[1]++;
            }
            else{
                a[3]++;
            }
        }
    }
    for(int i = 0; i < 4; i++){
        cout << a[i] << ' ';
    }
    if(a[0] >= 2){
        cout << 'E';
    }
    return 0;
}