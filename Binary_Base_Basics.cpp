#include<bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        int count = 0;
        for (int i = 0, j = n-1; i < j; i++, j--)
        {
            if(s[i] != s[j]){
                count++;
            }
        }
    
        if (count <= k){
            if(n%2 == 1){
            cout<<"YES"<<endl;
            }
            else if ((k-count)%2 == 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}