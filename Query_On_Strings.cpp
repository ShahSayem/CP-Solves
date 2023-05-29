#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
map <int, multiset <int> > mp; //size -> cnt{cnt1, cnt2, cnt3....}

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
        mp[i+1].insert(cur->cnt);
    }
    cur->completeWord = true;
}

void WordDel(string &s)
{
    node *cur = root;
    int n = s.size(), x;
    for (int i = 0; i < n; i++){
        x = s[i]-'a';

        cur = cur->next[x];
        auto d = mp[i+1].find(cur->cnt);
        mp[i+1].erase(d);
        cur->cnt--; 
    }
    cur->completeWord = false;
}


int main()
{
    Shah_Sayem

    root = new node();
    int q, operation, k, l, x;
    cin>>q;

    vector <string> v(q+1, "");
    string word;
    bool flag;
    for (int i = 1; i <= q; i++){
        cin>>operation;

        if (operation == 1){
            cin>>word;

            reverse(word.begin(), word.end());
            v[i] = word;
            trieInsert(word);
        }    
        else if (operation == 2){
            cin>>k>>l;

            if ((mp[l].find(k) != mp[l].end()) && (mp.find(l) != mp.end()))
                cout<<"YES\n";
            else 
                cout<<"NO\n";
        }
        else {
            cin>>x;
            if (v[x] != ""){
                WordDel(v[x]);

                v[x] = "";
            }
        }
    }

    return 0;
}