#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const ll MAX = 1e10+5;
int n, k;

bool isValid(vector <int> &v, ll mxHight)
{
    ll sum = 0;
    for (int i = 0; i < n; i++){
        if (v[i] < mxHight)
            sum += (mxHight-v[i]);

        if (sum > k)
            return false;
    }
    
    return true;
}

int mxLengthFind(vector <int> &v)
{
    ll low = 0, high = MAX, mid;

    while (low <= high){
        mid = (low+high)/2;
        if(isValid(v, mid)){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    
    return high;
}

void solve()
{
    cin>>n>>k;

    vector <int> h(n), fruit(n);
    for (int i = 0; i < n; i++){
        cin>>fruit[i];
    }

    int mxLen = 1, cnt = 1, l = -1, r = -1, tempL, tempR;
    bool check = 0;
    for (int i = 0; i < n; i++){
        cin>>h[i];

        if (i && (h[i-1]%h[i] == 0)){
            if (cnt == 1)
                tempL = i-1;
            cnt++;

            //cout<<"if ";
        }
        else {
            tempR = i-1;
            mxLen = max(cnt, mxLen);
            cnt = 1;
            check = 0;

            if (tempR-tempL+1 == mxLen) 
                l = tempL, r = tempR;
            //cout<<"else ";
        }
        mxLen = max(cnt, mxLen);

        if (tempR-tempL+1 == mxLen) 
            l = tempL, r = tempR;
    }


    cout<<mxLen<<"\n";
    cout<<l<<" "<<r;
   // cout<<mxLengthFind(h);
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
