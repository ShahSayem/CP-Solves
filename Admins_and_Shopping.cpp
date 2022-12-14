#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
        long long n, x;
        cin>>n>>x;

        vector <long long> vec;

        for (int i = 0; i < n; i++){
            long long j;
            cin>>j;
            vec.push_back(j);
        }

        int m = *min_element(vec.begin(), vec.end());
        int ans = max(n, (long long)ceil((float)x/m));

        cout<<ans<<endl;
    }

    return 0;
}
    