#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

struct node {
    node *next[52];     //A...Z a...z
    int cntWord, cntPref;

    node (){
        cntWord = 0, cntPref = 0;
        for (int i = 0; i < 52; i++){
            next[i] = NULL;
        }
    }
}* root;

void trieInsert(string &s)
{
    node *cur = root;
    int n = s.size(), x;
    for (int i = 0; i < n; i++){
        if (s[i] <= 'Z')
            x = s[i]-'A';
        else    
            x = s[i]-'a'+26;

        if (cur->next[x] == NULL){
            cur->next[x] = new node();
        }

        cur = cur->next[x];
        cur->cntPref++;
    }

    cur->cntWord++;
}

int cntWordsEqualTo(string &s)
{
    node *cur = root;
    int n = s.size(), x;
    for (int i = 0; i < n; i++){
        if (s[i] <= 'Z')
            x = s[i]-'A';
        else    
            x = s[i]-'a'+26;

        if (cur->next[x] == NULL){
            return 0;
        }

        cur = cur->next[x];
    }

    return cur->cntWord;
}

void trieDel(node* cur)
{
    for (int i = 0; i < 52; i++)
        if (cur->next[i])
            trieDel(cur->next[i]);

    delete(cur);
}

void wordSort(string &s)
{
    if (s.size() > 2)
        sort(s.begin()+1, s.end()-1);
}

void solve()
{
    int n;
    cin>>n;

    string s;
    for (int i = 0; i < n; i++){
        cin>>s;

        wordSort(s);
        trieInsert(s);
    }

    int m, nn;
    cin>>m;

    string z;
    cin.ignore();
    while (m--){
        ll ans = 1;
        getline(cin, s);
        nn = s.size();

        stringstream sf(s);
        while (sf >> z){
            wordSort(z);
            ans *= cntWordsEqualTo(z);
        }
        
        cout<<ans<<"\n";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<":\n";
        root = new node();
        solve();
        trieDel(root);
    }

    return 0;
}
