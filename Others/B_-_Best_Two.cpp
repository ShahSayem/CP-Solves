#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define pi = 3.14159265358979323846
#define MOD = 1e9+7

bool primeChecker (ll n)
{
    if(n==0 || n==1)
        return false;
    for (int i = 2; i*i <= n; i++){
        if (n%i == 0)
            return false;
    }

    return true;
}


int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int n;
    cin>>n;

    while (n--){
        vector <double> a(3);
        double i, j, k;
        cin>>i>>j>>k;
        a[0] = i;
        a[1] = j;
        a[2] = k;
        sort(a.begin(), a.end());
        int cnt = 0;

        if (a[0] < 10.00)
            cnt++;
        if (a[1] < 10.00)
            cnt++;    
              
        if (cnt > 1)
            cout<<"Failed\n";
        else {
            double ans = a[1]+a[2];
            ans /=(2*1.0);

            printf("%0.2lf\n", ans);
        }
    }

    return 0;
} 
  
