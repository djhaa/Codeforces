#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

struct Node{
    int first, second;
};

void solveTestCase(){
    int n;
    scanf("%d", &n);
    vector<int> nums(n);
    for(int i = 0; i < n; i++) scanf("%d", &nums[i]);
    unordered_map<int, Node> mp;
    for(int i = 1; i < n; i++){
        for(int j = i-1; j >= 0; j--){
            int num = nums[i] + nums[j];
            if(mp.find(num) != mp.end()){
                int first = mp[num].first, second = mp[num].second;
                set<int> coll;
                coll.insert(first);
                coll.insert(second);
                coll.insert(i);
                coll.insert(j);
                if(coll.size() == 4){
                    cout << "YES" << endl;
                    cout << first+1 << " " << second+1 << " " << i+1 << " " << j+1 << endl;
                    return;
                }
            }else{
                mp[num] = (Node){i, j};
            }
        }
    }
    cout << "NO" << endl;
}

int main(){
    solveTestCase();
    return 0;
}