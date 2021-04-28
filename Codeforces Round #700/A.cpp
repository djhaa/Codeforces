#include <iostream>
#include <string>
using namespace std;

string s;
int t;

int main(){
    cin >> t;
    while(t--){
        cin >> s;
        string ans;
        for(int i = 0; i < s.size(); i++){
            if(i % 2 == 0){
                if(s[i] > 'a') ans += 'a';
                else ans += 'b';
            }else{
                if(s[i] < 'z') ans += 'z';
                else ans += 'y';
            }
        }
        cout << ans << endl;
    }
}