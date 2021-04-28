#include <iostream>
#include <string>
using namespace std;

int t, x, y;
string s;

int main(){
    cin >> t;
    while(t--){
        cin >> x >> y;
        cin >> s;
        char typex, typey;
        int cnt_x = 0, cnt_y = 0;
        if(x > 0) typex = 'R';
        else typex = 'L';
        if(y > 0) typey = 'U';
        else typey = 'D';
        for(char c: s){
            if(c == typex) cnt_x++;
            if(c == typey) cnt_y++;
        }
        if(cnt_x >= abs(x) && cnt_y >= abs(y)) printf("YES\n");
        else printf("No\n");
    }
}