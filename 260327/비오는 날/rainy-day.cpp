#include <iostream>

#define MAX_N 10

using namespace std;

class expect{
    public:
        string date;
        string day;
        string weather;
        expect(string date, string day, string weather){
            this->date = date;
            this->day = day;
            this->weather = weather;
        }
        expect() { }
};

int main() {
    int n;
    cin >> n;
    expect exp[100];
    for(int i = 0; i < n; i++){
        string date;
        string day;
        string weather;
        cin >> date >> day >> weather;
        exp[i] = expect(date, day, weather);
    }
    int idx;
    for(int i = 0; i < n; i++){
        if(exp[i].weather == "Rain"){
            idx = i;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(exp[i].weather == "Rain" && exp[i].date < exp[idx].date){
            idx = i;
        }
    }
    cout << exp[idx].date << ' ' << exp[idx].day << ' ' << exp[idx].weather;
    return 0;
}