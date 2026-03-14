#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum;
    int a;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = 0; j < 4; j++){
            cin >> a;
            sum += a;
        }
        if(sum / 4 >= 60){
            cout << "pass" << endl;
            cnt++;
        }
        else{
            cout << "fail" << endl;
        }
    }
    cout << cnt;
    return 0;
}