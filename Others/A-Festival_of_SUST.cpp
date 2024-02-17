#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    string str;
    getline(cin, str);

    bool cse = 0, eee = 0, swe = 0, others = 0;
    stringstream s(str);
    string word, curr;
    int sz;
    while (s >> word){
        sz = word.size();

        if ((word[0] == '.' || word[0] == ',') || (word[sz-1] == '.' || word[sz-1] == ',')){
            for (int i = 0, j = sz-1; i < j;){
                bool c1 = 0, c2 = 0;
                if (word[i] == ',' || word[i] == '.'){
                    i++;
                    c1 = 1;
                }
                if (word[j] == ',' || word[j] == '.'){
                    j--;
                    c2 = 1;
                }
                
                if (!c1 && !c2){                    
                    word = word.substr(i, j-i+1);
                    break;
                }
            }
        }

        sz = word.size();
        if (sz == 3 && (word[0] >= 'A' && word[0] <= 'Z') && (word[1] >= 'A' && word[1] <= 'Z') && (word[2] >= 'A' && word[2] <= 'Z')){
            if (word == "CSE"){
                cse = 1;
            }    
            else if (word == "EEE"){
                eee = 1;
            }    
            else if (word == "SWE"){
                swe = 1;
            }    
            else 
                others = 1;
        }
    }
    
    if (cse && eee && swe){
        cout<<"SUST Tech Fest";
    }
    else if (cse && !eee && !swe && !others){
        cout<<"SUST CSE Carnival";
    }
    else {
        cout<<"Festival of SUST";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1, x = 1;
    cin>>tc;
    cin.ignore();
    while (tc--){
        cout<<"Case "<<x++<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
