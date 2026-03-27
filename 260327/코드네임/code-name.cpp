#include <iostream>
#include <algorithm>
#define MAX_N 5

using namespace std;

class agent{
    public:
        char codename;
        int score;
        agent() {}
        agent(char codename, int score){
            this->codename = codename;
            this->score = score;
        }
        bool operator<(const agent& other) const {
            return score < other.score;
        }
};

int main() {
    char codename[MAX_N];
    int score[MAX_N];
    agent info[MAX_N];

    for (int i = 0; i < MAX_N; i++) {
        cin >> codename[i] >> score[i];
        info[i] = agent(codename[i], score[i]);
    }

    sort(info, info + MAX_N);

    cout <<info[0].codename << ' ' << info[0].score;
    

    return 0;
}
