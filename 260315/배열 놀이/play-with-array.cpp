#include <iostream>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    int a[100];
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    int c;
    int p, q;
    for(int i = 0; i < Q; i++){
        cin >> c;
        if(c == 1){
            cin >> p;
            cout << a[p - 1];
        }
        else if(c == 2){
            cin >> p;
            int t = 0;
            for(int j = 0; j < N; j++){
                if(a[j] == p){
                    t = j + 1;
                    break;
                }
            }
            cout << t;
        }
        else if(c == 3){
            cin >> p >> q;
            for(int j = p - 1; j < q; j++){
                cout << a[j] << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}