#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    
    int n;
    cin>>n;
    int arr[n], i, cnt = 0;
    for(i=0; i<n; i++)
        cin>>arr[i];

    if(n==1)
        cout<<1<<endl;
    else{
        sort(arr,arr+n);
        for(i=1; i<n; i++){
            if(arr[i]==arr[i-1])
                cnt++;
        }

        if(cnt%2==0)
            cout<<n-cnt;
        else
            cout<<n-(cnt+1);
    }  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}