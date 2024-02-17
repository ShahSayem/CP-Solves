#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 998244353;
const int MAX = 1e7+5;


void solve()
{
    int n, k, g, b, curr;
    cin>>n>>k>>g>>b;

    char ch1 = 'G', ch2 = 'B';
    if (g < b){
        swap(g, b);
        swap(ch1, ch2);
    }

    if ((g+k-1)/k > (b+1)){
        cout<<"NO";
        return;
    }

    while (g > b){
        curr = min(k, g);
        for (int i = 0; i < curr; i++){
            cout<<ch1;
        }

        if (b){
            cout<<ch2;
            b--;
        }    

        g -= curr;
    }

    if (g){
        cout<<ch1;
        g--;   
    }

    if (b){
        for (int i = 0; i < (b-g); i++){
            cout<<ch2;
        } 
        b -= (b-g);
    }

    while (g > 0 && b > 0){
        cout<<ch1<<ch2;

        g--, b--;
    }  
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
