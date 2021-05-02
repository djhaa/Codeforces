#include <bits/stdc++.h>
using namespace std;
#define Fast cin.tie(0), cout.tie(0), ios::sync_with_stdio(0)
using LL = long long;
using PII = pair<int, int>;

int ask(int l, int r){
    if(l >= r) return -1;
    cout << "? " << l << " " << r << endl;
    int res;
    cin >> res;
    return res;
}

int main(){
    int n;
    cin >> n;
    int point = ask(1, n);
    // 先找出最大元素在point左边还是右边
    if(point == 1 || ask(point, n) == point){
        int l = point, r = n;
        while(r - l > 1){
            int mid = l + (r - l) / 2;
            if(ask(point, mid) == point){
                r = mid;
            }else{
                l = mid + 1;
            }
        }
        if(point == l){
            cout << "! " << r << endl;
        }else{
            if(ask(point, l) == point) cout << "! " << l << endl;
            else cout << "! " << r << endl;
        }
    }else{
        int l = 1, r = point;
        while(r - l > 1){
            int mid = l + (r - l) / 2;
            if(ask(mid, point) == point){
                l = mid;
            }else{
                r = mid - 1;
            }
        }
        if(r == point){
            cout << "! " << l << endl;
        }else{
            if(ask(r, point) == point) cout << "! " << r << endl;
            else cout << "! " << l << endl;
        }
    }
    return 0;
}