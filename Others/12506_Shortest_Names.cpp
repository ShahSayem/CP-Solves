#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

struct node {
    node *next[26];
    int cnt;
    bool completeWord;

    node (){
        cnt = 0;
        completeWord = false;
        for (int i = 0; i < 26; i++){
            next[i] = NULL;
        }
    }
}* root;

void trieInsert(string &s)
{
    node *cur = root;
    int n = s.size(), x;
    for (int i = 0; i < n; i++){
        x = s[i]-'a';

        if (cur->next[x] == NULL){
            cur->next[x] = new node ();
        }

        cur = cur->next[x];
        cur->cnt++;
    }
    cur->completeWord = true;
}

int trieSearch(string &s)
{
    node *cur = root;
    int n = s.size(), x, pref = 0;
    for (int i = 0; i < n; i++){
        x = s[i]-'a';

        cur = cur->next[x];
        pref++;
        
        if (cur->cnt == 1)
            return pref;
    }

    return pref;
}

void trieDel(node* cur)
{
    for (int i = 0; i < 26; i++)
        if (cur->next[i])
            trieDel(cur->next[i]);

    delete(cur);
}

void solve()
{
    int n;
    cin>>n;

    vector <string> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        trieInsert(v[i]);
    }

    ll ans = 0;
    for (int i = 0; i < n; i++){
        ans += trieSearch(v[i]);
    }
    cout<<ans;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        root = new node();
        solve();
        cout<<"\n";

        trieDel(root);
    }

    return 0;
}
