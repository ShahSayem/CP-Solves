#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void generateCombinations(int sz) {
    int numCombinations = pow(2, sz);

    for (int i = 0; i < numCombinations; i++) {
        vector<int> combination(sz, 0);
        int num = i;
        
        for (int j = sz - 1; j >= 0; j--) {
            combination[j] = num % 2;
            num /= 2;
        }
    }
}

void solve()
{
    int n, sz = 0, num;
    cin>>n;

    num = n;
    while (num){
        num /= 10;
        sz++;
    }

    vector <int> store, ans;
    for (int i = 0; i < sz; i++){
        num = (num*10)+1;

        store.push_back(num);
    }

    num = 1;
    for (int i = 1; i < sz; i++){
        num = (num*10);

        store.push_back(num);
    }
    sort(store.rbegin(), store.rend());
    
    int temp = 0, idx = 0, cnt = 0;
    while (temp < n){
        if (temp+store[idx] <= n){
            temp += store[idx];
            
            ans.push_back(store[idx]);
            cnt++;
        }
        else {
            idx++;
        }
    }
    
    cout<<ans.size()<<"\n";
    for (auto it : ans){
        cout<<it<<" ";
    } 
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
