#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    int c = 0;
    int a[100][100];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(i % 2){
                a[n - j - 1][i] = c;
            }
            else{
                a[j][i] = c;
            }
            c++;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
