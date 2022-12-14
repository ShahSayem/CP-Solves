#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    string a, b;
    cin>>a>>b;

    deque <int> ans;
    int temp, inHand = 0;
	for(int i = 39; i > -1 ; i--){
        temp = (a[i]-'0')+(b[1]-'0');
        temp += inHand;
        inHand = 0;

        if (temp < 10){
            ans.push_front(temp);
        }
        else {
            if (i){
                ans.push_front(temp%10);
                inHand = temp/10;
            }
            else {
                ans.push_front(temp);
            }
        }
    }

    for(int i = 0; i < 40 ; i++){
        cout<<ans[i];
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin>>t;

    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
} 
  
