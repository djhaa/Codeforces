#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

struct node{
    int id, val;
};

bool cmp(node u, node v){
    return u.val < v.val;
}

void solveTestCase(){
    int n, x;
    cin >> n;
    vector<int> nums(n);
    vector<node> a;
    vector<vector<LL>> mp(n+1);
    unordered_set<int> coll;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        coll.insert(nums[i]);
    }
    for(int i = 0; i < n; i++){
        cin >> x;
        a.push_back({i, x});
    }
    sort(a.begin(), a.end(), cmp);
    for(int i = 0; i < n; i++){
        int id = a[i].id, val = a[i].val;
        if(mp[nums[id]].size() == 0){
            mp[nums[id]].push_back((LL)val);
        }else{
            LL y = mp[nums[id]].back();
            mp[nums[id]].push_back(val + y);
        }
    }
    int k = 1;
    vector<int> st; 
    while(k <= n){
        LL sum = 0;
        st.clear();
        for(int x:coll){
            int len = mp[x].size();
            if(len >= k){
                int cnt = len % k;
                if(cnt == 0) sum += mp[x].back();
                else sum += (mp[x].back() - mp[x][cnt-1]);
            }else{
                st.push_back(x);
            }
        }
        for(int x:st){
            coll.erase(x);
        }
        k++;
        cout << sum << " ";
        if(sum == 0) break;
    }
    while(k <= n){
        cout << 0 << " ";
        k++;
    }
    cout << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}