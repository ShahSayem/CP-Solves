#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int n, m, k;
    cin>>n>>m>>k;

    string a, b, c = "";
    cin>>a;
    cin>>b;

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    int i = n-1, j = m-1, cons = 0;
    int check;


    if (a[i] <= b[j]){
        c += a[i];
        a.pop_back();
        i--;
        check = 0;
    }
    else{
        c += b[j];
        b.pop_back();
        j--;
        check = 1;        
    }

    cons = 1;

    while (a.size() && b.size()){
        if (a[i] <= b[j]){
            if (!check){
                if (cons == k){
                    check = 1;
                    c += b[j];
                    b.pop_back();
                    j--;
                    cons = 1;
                }
                else {
                    check = 0;
                    c += a[i];
                    a.pop_back();
                    i--;
                    cons++;
                }
            }
            else {
                check = 0;
                c += a[i];
                a.pop_back();
                i--;
                cons = 1;
            }
        }
        else {
            if (check){
                if (cons == k){
                    check = 0;
                    c += a[i];
                    a.pop_back();
                    i--;
                    cons = 1;
                }
                else {
                    check = 1;
                    c += b[j];
                    b.pop_back();
                    j--;
                    cons++;
                }
            }
            else {
                check = 1;
                c += b[j];
                b.pop_back();
                j--;
                cons = 1;
            }
        }
    }
    
    cout<<c;
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