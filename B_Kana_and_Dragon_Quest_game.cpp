#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long x, n, m, a;
		cin>>x>>n>>m;
		a = x;

		while((x > 20) && n--){
			x = (x/2)+10;
		}
		while(m--){
			x -= 10;
		}

		if (x <= 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}