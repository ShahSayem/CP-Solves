#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b;
    cin >> a >> b;
    string s="1abcdefghijklmnopqrstuvwxyz";
    int n,ans;

    int A = b/a;

    if(a*26 < b){
        cout << "impossible"<<endl;
        return 0;
    }

    for(int i=0; i<a-1; i++){
        n = (b/a);
        cout << s[n];
    }
    ans = b - (n*(a-1));
    cout <<s[ans]<<endl;
}
