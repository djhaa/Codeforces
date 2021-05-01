#include <bits/stdc++.h>
using namespace std;
#define Fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using LL = long long;
using PII = pair<int, int>;

int gcd(int x, int y){
    if(y == 0) return x;
    return gcd(y, x%y);
}

void solveTestCase(){
    int n, q;
    cin >> n >> q;
    vector<int> nums(n);
    int cnt[2] = {0};
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        cnt[nums[i]]++;
    }
    int type, value;
    while(q--){
        cin >> type >> value;
        if(type == 1){
            nums[value-1] ^= 1;
            cnt[nums[value-1]]++;
            cnt[nums[value-1]^1]--;
        }else{
            if(value > cnt[1]) cout << 0 << endl;
            else cout << 1 << endl;
        }
    }
}

int main(){
    Fast;
    solveTestCase();
    return 0;
}