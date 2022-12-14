#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

void solve()
{
    int n, x, y, i, j;
    cin>>n;

    x = n;
	for(i = 1; i <= n ; i++){
		for(j = 1; j < x; j++){
			cout<<" ";
		}
		x--;
		y = 2*i-1;
		for(j = 1; j <= y; j++){
			cout<<"*";

			if(j < y){
				cout<<" ";
				j++;	
			}
		}
		cout<<"\n";
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
  
