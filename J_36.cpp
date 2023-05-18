#include <bits/stdc++.h>
using namespace std;

int sum(int x){
    int ans = 0;
    for (int i = 1; i <= x; i++){
        ans += i;
    }
    return ans;
}

int main()
{
    int t;
    cin>>t;

    while(t--){
        int d, n;
        cin>>d>>n;

        for (int i = 0; i < d; i++){
            n = sum(n);   
        }
        cout<<n<<endl;
    }
    
    return 0;
}