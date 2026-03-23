#include <iostream>
using namespace std;

int count(int A, int B){
    int cnt = 0;
    for(int i = A; i <= B; i++){
        if(i % 3 == 0){
            cnt++;
        }
        else{
            int n = i;
            while(n){
                if(n % 10 == 3 || n % 10 == 6 || n % 10 == 9){
                    cnt++;
                    break;
                }
                n /= 10;
            }
        }
    }
    return cnt;
}

int main() {
    int A, B;
    cin >> A >> B;
    cout << count(A, B);
    return 0;
}