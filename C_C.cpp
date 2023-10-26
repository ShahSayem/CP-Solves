#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

void solve()
{
    int n, x, curr;
    string s, temp;
    
    cin>>s;
    n = s.size();

    set <char> st;
    map <char, int> mp;
    for (int i = 0; i < n; i++){
        mp[s[i]]++;
    }

    char ch, c;
    
    for (int i = 0; i < n; i++){
        if (s[i] == '6'){
            ch = '5';
            for (int j = 0; j < 5; j++){
                if (mp[ch] && ((ch != s[i]) || mp[ch] > 1)){
                    curr = ch-'0';
                    x = 60 + curr;
                    c = x;
                    
                    //cout<<x<<" ";
                    st.insert(c);
                }

                ch++;
            }
        }
        else if (s[i] == '9'){
            if (mp['0']){
                st.insert('Z');
            }
        }
        else if (s[i] > '6' && s[i] < '9'){ //7, 8
            ch = '0';
            for (int j = 0; j < 10; j++){
                if (mp[ch] && ((ch != s[i]) || mp[ch] > 1)){
                    curr = ch-'0';
                    if (s[i] == '7')
                        x = 70 + curr;
                    else 
                        x = 80 + curr;

                    c = x;
                    //cout<<x<<" ";

                    st.insert(c);
                }

                ch++;
            }
        }
        // else { //1...5

        // }
    }

    for (auto it : st){
        cout<<it;
    } 
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
