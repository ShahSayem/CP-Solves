#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 100+5;

int dp[MAX], cnt = 0;
vector <int> v;

bool isPossible(vector <int> &vec, ll target)
{
    ll chceckSum = 0, cnt = 0, n = vec.size();
    vector < vector <int> > allPossible;
    vector <ll> idxSum;

    ll sum = 0, sum2 = 0;
    for (int i = 0; i < n; i++){
        chceckSum += i;
        for (int j = i; j < n; j++){ 
            sum = 0, sum2 = 0;
            vector <int> curr, currIdx;          // Now A[i..j] is the subarray
            for (int k = i; k <= j; k++){
                curr.push_back(v[k]);
                currIdx.push_back(k);
                sum += v[k];
                sum2 += k;
            }
            
            if (sum == target){
                allPossible.push_back(curr);
                idxSum.push_back(sum2);
                cnt++;
            }
        }
    }

    //cout<<chceckSum<<"\n";
    sort(idxSum.begin(), idxSum.end());

    // for (auto it : idxSum){
    //     cout<<it<<" ";
    // }

    for (int i = 0; i < idxSum.size(); i++){
        for (int j = i+1; j < idxSum.size(); j++){
            for (int k = j+1; k < idxSum.size(); k++){
                //cout<<i<<" "<<j<<" "<<k<<"\n";
                if (idxSum[i]+idxSum[j]+idxSum[k] == chceckSum){
                    //cout<<idxSum[i]<<" "<<idxSum[j]<<" "<<idxSum[k];
                    return true;
                }
            }
        } 
    }

    return false;
}

void solve()
{
   // memset(dp, -1, sizeof(dp));
    int n;
    cin>>n;
    v.resize(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    ll sum = 0, mx = 0;
    vector <int> vec;
    for (int i = 0; i < n; i++){
        sum += v[i];
        mx = max(ll(v[i]), mx);

        vec.push_back(v[i]);
        if (sum == 0){
            cout<<"1\n";
            continue;
        }

        if ((sum%3 == 0) && (mx <= sum/3LL)){
            if (isPossible(vec, sum/3)){
                cout<<"1\n";
                continue;
            }
        }
        
        cout<<"0\n";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<":\n";
        solve();
        //cout<<"\n";
    }

    return 0;
}
