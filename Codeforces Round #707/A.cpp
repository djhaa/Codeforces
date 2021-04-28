#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

struct Node{
    int a, b;
};

void solveTestCase(){
    int n;
    cin >> n;
    vector<Node> nums;
    vector<int> T(n);
    for(int i = 0; i < n; i++){
        Node u;
        cin >> u.a >> u.b;
        nums.push_back(u);
    }
    for(int i = 0; i < n; i++) cin >> T[i];
    int ans = nums[0].a + T[0];
    for(int i = 1; i < n; i++){
        Node u = nums[i-1];
        int a = u.a, b = u.b;
        int k = (b - a) / 2 + ((b - a)%2 != 0);
        int maxinum = max(ans + k, b);
        ans = maxinum + (nums[i].a - nums[i-1].b + T[i]);
    }
    cout << ans << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}