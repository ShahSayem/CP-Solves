#include <bits/stdc++.h>
using namespace std;

int c = 1;

void solve(int a[]){
    sort(a, a+3);

    cout<<"Case "<<c<<": "<<a[1]<<endl;
    c++;
}

int main()
{
    int t;
    cin>>t;
    
    while(t--){
        int a[3];
        for (int i = 0; i < 3; i++)
        {
            cin>>a[i];
        }

        solve(a);
    }
    return 0;
}