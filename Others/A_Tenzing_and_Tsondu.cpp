#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    int n, m;
    cin>>n>>m;

    vector <int> a(n), b(m);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<m; i++){
        cin>>b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int cnt1 = n, cnt2 = m, i = n-1, j = 0, x, y;
    int temp;
    while (cnt1 && cnt2){
        x = a[i];
        j = upper_bound(b.begin(), b.end(), x)-b.begin();

        if (j > m-1){
            j = m-1;
        }

        y = b[j];

        if (x == y){
            a[i] = 0;
            b[j] = 0;

            cnt1--;
            cnt2--;
        }
        else if (x > y){
            a[i] = x-y;
            b[j] = 0;

            cnt2--;
        }
        else{
            a[i] = 0;
            b[j] = y-x;

            cnt1--;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());        
    }
    
    if (cnt1){
        cout<<"Tsondu";
    }
    else if (cnt2){
        cout<<"Tenzing";
    }
    else {
        cout<<"Draw";
    }  
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
