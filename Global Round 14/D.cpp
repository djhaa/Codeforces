#include <bits/stdc++.h>
using namespace std;
#define Fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> nums(n);
    vector<int> lcnt(n+1, 0), rcnt(n+1, 0);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        if(i < l) lcnt[nums[i]]++;
        else rcnt[nums[i]]++;
    }
    int cnt;
    // 去除符合要求的袜子
    for(int i = 1; i <= n; i++){
        cnt = min(lcnt[i], rcnt[i]);
        lcnt[i] -= cnt;
        rcnt[i] -= cnt;
        l -= cnt;
        r -= cnt;
    }
    // 比较左右袜子个数，默认认为左脚袜子个数大于等于右脚袜子个数
    if(l < r){
        swap(l, r);
        swap(lcnt, rcnt);
    }
    int res = 0;
    // 从同一种颜色的左脚袜子(或者同一种颜色的右脚袜子)中选择将左脚变为右脚，直到左右脚袜子个数相等
    for(int i = 1; i <= n; i++){
        int extra = l - r;
        int cando = lcnt[i] / 2;
        int Do = min(cando*2, extra);
        res += Do / 2;
        l -= Do;
    }
    // 将多余的左脚袜子变为右脚袜子，并改变颜色
    res += (l - r) / 2 + (l + r) / 2;
    cout << res << endl;
}

int main(){
    Fast;
    int t;
    cin >> t;
    while(t--) solveTestCase();
    return 0;
}