#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAX = 1000005;
int n, k;

ll getSum(int w,ll c, vector <int> &sz){
    int n = sz.size();
    ll sum = 0;
    for (int i = 0; i < n; i++){
        sum += ((1LL*sz[i]+2*w)*(1LL*sz[i]+2*w));
 
        if (sum > c)
            return sum;
    }
    
    return sum;
}
 
int val(ll c, vector <int> &idx)
{
    ll sz = idx.size();
    ll l = 1, r = sz-1, mid, sum;
    while (l <= r){
        mid = l+(r-l)/2LL;
        sum = getSum(mid, c, idx);
        //cout<<l<<" "<<r<<" "<<mid<<"\n";
 
        if (sum == c){
            return mid;
        }
        else if (sum > c){
            r = mid-1;
        }
        else {
            l = mid+1;
        }
    }
}


int main()
{
    int mx = INT_MIN;
    cin>>n>>k;

    string s;
    cin>>s;
    vector<ll>idx;
    for(int i = 0; i < n; i++){
        if(s[i] == '0')
            idx.push_back(i);
    }



    return 0;
} 
  
