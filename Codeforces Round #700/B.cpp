#include <iostream>
using namespace std;
using LL = long long;
const int N = 1e5+5;

int t;
int a, b, n;
int attack[N], health[N];

int main(){
    cin >> t;
    while(t--){
        cin >> a >> b >> n;
        LL sum = 0;
        int maxinum = 0;
        for(int i = 1; i <= n; i++){
            cin >> attack[i];
            maxinum = max(maxinum, attack[i]);
        }
        for(int i = 1; i <= n; i++) {
            cin >> health[i];
            LL count;
            if(health[i] % a == 0) count = health[i]/a;
            else count = health[i]/a + 1;
            sum += count * attack[i];
        }
        if(b - sum + maxinum > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}