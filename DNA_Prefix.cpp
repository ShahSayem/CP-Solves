#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
int ans;

struct node {
    node *next[4];
    int cntWord, cntPref;

    node (){
        cntWord = 0, cntPref = 0;
        for (int i = 0; i < 4; i++){
            next[i] = NULL;
        }
    }
}* root;

void trieInsert(string &s)
{
    node *cur = root;
    int n = s.size(), x;
    for (int i = 0; i < n; i++){
        if (s[i] == 'A')
            x = 0;
        else if (s[i] == 'C')
            x = 1;
        else if (s[i] == 'G')
            x = 2;
        else 
            x = 3;

        if (cur->next[x] == NULL){
            cur->next[x] = new node ();
        }

        cur = cur->next[x];
        cur->cntPref++;

        // z = cur->cntPref;
        // ans = max((z*cnt) ,ans);
    }

    cur->cntWord++;
}

void cntWordsStartingWith(string &s) 
{
    node *cur = root;
    int n = s.size(), x, z, len = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == 'A')
            x = 0;
        else if (s[i] == 'C')
            x = 1;
        else if (s[i] == 'G')
            x = 2; 
        else 
            x = 3;

        if (cur->next[x] == NULL){
            return;
        }
        len++;

        cur = cur->next[x];

        z = cur->cntPref;
        ans = max((z*len) ,ans);
    }
}

void trieDel(node* cur)
{
    for (int i = 0; i < 4; i++)
        if (cur->next[i])
            trieDel(cur->next[i]);

    delete(cur);
}


void solve()
{
    int n;
    cin>>n;
    ans = 1;

    vector <string> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
        trieInsert(v[i]);
    }

    for (int i = 0; i < n; i++){
        cntWordsStartingWith(v[i]);
    }
    
    cout<<ans;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";
        root = new node();
        solve();
        trieDel(root);
        cout<<"\n";
    }

    return 0;
}
