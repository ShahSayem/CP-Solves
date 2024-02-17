#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 100+5;

int main(){
    int n;
    ll sum = 0, target, sum2 = 0;
    cin>>n;

    cin>>target;
    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    ll chceckSum = 0, cnt = 0;
    map <ll, ll> mp;
    vector < vector <int> > allPossible;
    vector <ll> idxSum;
    for (int i = 0; i < n; i++){
        chceckSum += i;
        for (int j = i; j < n; j++){ 
            sum = 0, sum2 = 0;
            vector <int> curr, currIdx;          // Now A[i..j] is the subarray
            for (int k = i; k <= j; k++){
                curr.push_back(v[k]);

                cout<<v[k]<<" ";
                currIdx.push_back(k);
                sum += v[k];
                sum2 += k;
            }
            cout<<"\n";
            if (sum == target){
                allPossible.push_back(curr);
                idxSum.push_back(sum2);
                mp[sum] = cnt;

                cnt++;
            }
        }
    }

    // cout<<allPossible.size()<<"\n";

    // for (auto currArr : allPossible){
    //     for (auto it : currArr){
    //         cout<<it<<" ";
    //     }
    //     cout<<"\n";
    // }

    //cout<<chceckSum<<"\n";
    sort(idxSum.begin(), idxSum.end());

    for (auto it : idxSum){
        //cout<<it<<" ";
    }

    for (int i = 0; i < idxSum.size(); i++){
        for (int j = i+1; j < idxSum.size(); j++){
            for (int k = j+1; k < idxSum.size(); k++){
                // cout<<i<<" "<<j<<" "<<k<<"\n";
                // if (idxSum[i]+idxSum[j]+idxSum[k] == chceckSum){
                //     cout<<idxSum[i]<<" "<<idxSum[j]<<" "<<idxSum[k];
                //     return 0;
                // }
            }
        }
        
    }
    

    return 0;
}