#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
	int x,y;
	cin>>x>>y;
	
	if(x%y==0)
	    cout<<0<<endl;
	else {	
	    int w=x%y;	
	    cout<<y-w;
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
  
