#include <iostream>
using namespace std;

int main() {
    string a[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    cin >> c;
    int cnt = 0;
    for(int i = 0; i < 5; i++){
        if(a[i][2] == c || a[i][3] == c){
            cout << a[i] << endl;
            cnt++;
        }
    } 
    cout << cnt;
    return 0;
}