#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    int c = 0;
    int s = 0;
    for(int i = A; i <= B; i++){
        if(i % 5 == 0 || i % 7 == 0){
            s += i;
            c++;
        }
    }
    cout << fixed;
    cout.precision(1);
    double avg = (double)s / c;
    cout << s << ' ' << avg;
    return 0;
}