#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    double sum = 0;
    double score;
    for(int i = 0; i < N; i++){
        cin >> score;
        sum += score;
    }
    cout << fixed;
    cout.precision(1);
    double avg = sum / N;
    cout << avg << endl;
    if(avg >= 4.0){
        cout << "Perfect";
    }
    else if(avg >= 3.0){
        cout << "Good";
    }
    else{
        cout << "Poor";
    }
    return 0;
}