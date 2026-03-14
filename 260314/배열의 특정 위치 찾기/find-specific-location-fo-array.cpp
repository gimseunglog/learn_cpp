#include <iostream>
using namespace std;

int main() {
    int num;
    int even_sum = 0;
    double t_sum = 0;
    int cnt = 0;
    for(int i = 0; i < 10; i++){
        cin >> num;
        if(num % 2 == 0){
            even_sum += num;
        }
        if(num % 3 == 0){
            t_sum += num;
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << even_sum << ' ' << t_sum / cnt;
    return 0;
}