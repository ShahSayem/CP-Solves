#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    sort(s.begin(), s.end());

    int n = count(s.begin(), s.end(), '+');

    for (int i = n, j = 0; i < s.size(); i++, j++){
        if(i != s.size()-1){
            cout<<s[i]<<s[j];
        }
        else{
            cout<<s[i];
        }
    }
    
    return 0;
}