#include<bits/stdc++.h>
using namespace std;
 
bool palindrome(string s)
{
    for(int i = 0, j = s.size()-1; i<j; i++, j--){
        if(s[i] != s[j]){
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin>>t;

    while (t--){
        int n, k;
        cin>>n>>k;

        string s;
        cin>>s;

        if (k == 0){
            cout<<1<<endl;
        }
        else if (palindrome(s)){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}