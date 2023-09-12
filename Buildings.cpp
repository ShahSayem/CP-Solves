#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MAX = 1e10+5;
int n, k;

bool isValid(vector <int> &v, ll mxHight)
{
    ll sum = 0;
    for (int i = 0; i < n; i++){
        if (v[i] <= mxHight)
        sum += (mxHight-v[i]);

        if (sum > k)
            return false;
    }
    
    return true;
}

int mxHightFind(vector <int> &v)
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

int main()
{
    Shah_Sayem

    cin>>n>>k;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    cout<<mxHightFind(v)<<"\n";

    return 0;
}

