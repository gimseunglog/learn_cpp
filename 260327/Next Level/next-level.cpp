#include <iostream>
#include <string>

using namespace std;

class user{
    public:
        string u_id;
        int u_lv;
        user(string id, int lv){
            this->u_id = id;
            this->u_lv = lv;
        }
};

int main() {
    string user2_id;
    int user2_level;
    cin >> user2_id >> user2_level;

    user user1("codetree", 10);
    user user2(user2_id, user2_level);
    
    cout << "user " << user1.u_id << " lv " << user1.u_lv;
    cout << endl;
    cout << "user " << user2.u_id << " lv " << user2.u_lv;  

    return 0;
}