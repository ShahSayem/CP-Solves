#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;


void solve()
{
    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    stack <int> st;
    ll mx = 0, hight, width;

    for (int i = 0; i <= n; i++){
        while (!st.empty() && (i == n || (arr[st.top()] >= arr[i]))){
            hight = arr[st.top()];
            st.pop();

            if (st.empty())
                width = i;
            else 
                width = i - st.top()-1;

            mx = max(hight*width, mx);
        }
        
        st.push(i);
    }
    
    cout<<mx;
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
