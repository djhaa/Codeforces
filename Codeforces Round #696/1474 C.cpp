#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

vector<int> check(multiset<int> coll, int n, int x){
    vector<int> ans;
    for(int i = 0; i < n; i++){
        auto it1 = coll.end();
        it1--;
        int y = x - *it1;
        coll.erase(it1);
        auto it2 = coll.find(y);
        if(it2 == coll.end()){
            return {};
        }
        ans.push_back(y), ans.push_back(x-y);
        x = x - y;
        coll.erase(it2);
    }
    return ans;
}

void solveTestCase(){
    int n;
    cin >> n;
    vector<int> nums(2*n);
    multiset<int> coll;
    for(int i = 0; i < 2*n; i++){
        cin >> nums[i];
        coll.insert(nums[i]);
    }
    sort(nums.begin(), nums.end());
    for(int i = 0; i < 2*n-1; i++){
        int x = nums[i] + nums[2*n-1];
        vector<int> ans = check(coll, n, x);
        if(ans.size()){
            cout << "YES" << endl;
            cout << x << endl;
            for(int j = 0; j < ans.size(); j+=2){
                cout << ans[j] << " " << ans[j+1] << endl;
            }
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}