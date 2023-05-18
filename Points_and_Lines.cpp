#include <bits/stdc++.h>
using namespace std;

int dist (int* a, int len)
{
    set <int> s;
    for (int i = 0; i < len; i++){
        s.insert(a[i]);
    }

    int ans = s.size();

    return ans;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int x[n], y[n];
        for(int i = 0; i < n; i++){
            cin>>x[i]>>y[i];
        }

        int f_ansx = dist(x, n);
        int f_ansy = dist(y, n);

        cout<<f_ansx+f_ansy<<endl;
    }

    return 0;
}