#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
bool check;

struct node {
    node *next[27];
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
    for (int i = 0; i < s.size(); i++){
        int x = s[i]-'a';

        if (cur->completeWord == true){
            check = 1;
        }

        if (cur->next[x] == NULL){
            cur->next[x] = new node ();
        }

        cur = cur->next[x];
    }
    cur->completeWord = true;
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

    string s;
    while (n--){
        cin>>s;
        trieInsert(s);

        if (check){
            cout<<"NO";

            return;
        }    
    }
    
    cout<<"YES";
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";

        check = 0;
        root = new node();
        solve();
        trieDel(root);

        cout<<"\n";
    }

    return 0;
}
