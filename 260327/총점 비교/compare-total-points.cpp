#include <iostream>
#include <algorithm>
using namespace std;

class score{
    public:
        string name;
        int kor, eng, mat;
        score() { }
        score(string name, int kor, int eng, int mat){
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->mat = mat;
        }
};

bool cmp(score a, score b){
    return (a.kor + a.eng + a.mat) < (b.kor + b.eng + b.mat);
}

int main() {
    int n;
    score scr[10];

    cin >> n;

    for(int i = 0; i < n; i++){
        string name;
        int kor, eng, mat;
        cin >> name >> kor >> eng >> mat;
        scr[i] = score(name, kor, eng, mat);
    }

    sort(scr, scr + n, cmp);

    for(int i = 0; i < n; i++){
        cout << scr[i].name << ' ' << scr[i].kor << ' ' << scr[i].eng << ' ' << scr[i].mat << endl;
    }

    return 0;
}