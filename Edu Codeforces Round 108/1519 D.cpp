#include <bits/stdc++.h>
using namespace std;
#define Fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    vector<LL> sum(n+1);
    for(int i = 0; i < n; i++){
        sum[i+1] = sum[i] + 1LL*a[i]*b[i];
    }
    LL res = sum[n];
    // 枚举中心点
    for(int center = 0; center < n; center++){
        LL cnt = 1LL * a[center] * b[center];
        // 反转的数组个数为奇数，存在中心点
        for(int l = center-1, r = center+1; l >= 0 && r < n; l--, r++){
            cnt += 1LL * a[l] * b[r];
            cnt += 1LL * b[l] * a[r];
            res = max(res, cnt + sum[l] + (sum[n] - sum[r+1]));
        }
        cnt = 0;
        // 反转的数组个数为偶数， 不存在中心点
        for(int l = center, r = center+1; l >= 0 && r < n; l--, r++){
            cnt += 1LL * a[l] * b[r];
            cnt += 1LL * b[l] * a[r];
            res = max(res, cnt + sum[l] + (sum[n] - sum[r+1]));
        }
    }
    cout << res << endl;
}

int main(){
    solveTestCase();
    return 0;
}