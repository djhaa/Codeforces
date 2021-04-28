#include <bits/stdc++.h>
using namespace std;
using LL = long long;
using PII = pair<int, int>;

void solveTestCase(){
    int n, x;
    cin >> n;
    vector<int> a;
    set<int> coll;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(coll.find(x) == coll.end()){
            coll.insert(x);
        }else{
            a.push_back(x);
        }
    }
    for(int t:coll){
        cout << t << " ";
    }
    for(int t:a){
        cout << t << " ";
    }
    cout << endl;
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--) solveTestCase();
    return 0;
}