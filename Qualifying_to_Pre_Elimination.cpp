#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--){
        int n, k;
        cin>>n>>k;

        int a[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }

        sort(a, a+n, greater<int>());

        int count = 0;

        for(int i = 0; i<n; i++){
            if(a[i] >= a[k-1]){
                count++;
            }
            else if(a[i] != a[i+1]){
                break;
            }
        } 
        cout<<count<<endl;
    }
    return 0;
}