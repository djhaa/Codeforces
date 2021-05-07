#include <bits/stdc++.h>
using namespace std;
#define Fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    /*
    本题题意可以转化为 在一段线段上有两点，要在线段上找一点已达到该点到两点距离之和最小，可以扩充至线段上有多个点
    比如： *...*  这种情况下可以选择[1,5]中任意一点，得到的距离之和都是相同的
          *.*.*  这种情况下只有下标为 2 的点符合要求
          总的来说就类似求最里层范围的中心点
    */
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '*') cnt++;
    }
    int cur = 0, mid;
    for(int i = 0; i < n; i++){
        if(s[i] == '*'){
            if(cur == cnt / 2){
                mid = i;
            }
            cur++;
        }
    }
    cur = mid - cnt / 2;
    LL res = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '*'){
            res += 1LL * abs(cur - i);
            cur++;
        }
    }
    cout << res << endl;
}

int main(){
    Fast;
    int t;
    cin >> t;
    while(t--)solveTestCase();
    return 0;
}