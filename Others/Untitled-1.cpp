#include <bits/stdc++.h>
using namespace std;

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
    int n = s.size(), x;
    for (int i = 0; i < n; i++){
        x = s[i]-'a';

        if (cur->next[x] == NULL){
            cur->next[x] = new node ();
        }

        cur = cur->next[x];
    }
    cur->completeWord = true;
}

bool trieSearch(string &s)
{
    node *cur = root;
    int n = s.size(), x;
    for (int i = 0; i < n; i++){
        x = s[i]-'a';

        if (cur->next[x] == NULL){
            return false;
        }

        cur = cur->next[x];
    }

    return cur->completeWord;
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
    string word;
    while (n--){
        cin>>word;

        trieInsert(word);
    }
    
    int q;
    cin>>q;
    while (q--){
        cin>>word;

        if (trieSearch(word))
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }
}

int main()
{
    int t;
    cin>>t;

    while (t--){
        root = new node();
        solve();

        trieDel(root);
    }  

    return 0;
}