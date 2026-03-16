#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int a[100][100];
    int c = 1;
    for(int i = 0; i < n + m - 1; i++){
        int row = (i < m) ? 0 : i - m + 1; 
        int col = (i < m) ? i : m - 1;
        while(row < n && col >= 0){
            a[row][col] = c;
            row++;
            col--;
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
