#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
struct intStr
{
    int a, string s;
};

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
    for (int i = 0; i < s.size(); i++){
        int x = s[i]-'a';

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

void WordDel(string &s)
{
    node *cur = root;
    for (int i = 0; i < s.size(); i++){
        int x = s[i]-'a';

        cur = cur->next[x];
    }
    cur->completeWord = false;
}

void solve()
{
    int q, operation, k, l, x;
    cin>>q;
    string word;
    vector <int> v;
    while (q--){
        cin>>operation;

        if (operation == 1){
            cin>>word;
            trieInsert(word);
        }    
        else if (operation == 2){
            cin>>k>>l;
        }
        else {
            cin>>x;

            if (trieSearch(word)){
                WordDel(word);
            }
        }
    }
}

int main()
{
    Shah_Sayem
    int t;
    cin>>t;

    while (t--){
        root = new node();
        solve();

        trieDel(root);
    }  

    return 0;
}
