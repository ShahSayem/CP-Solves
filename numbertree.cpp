#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

int main()
{
    Shah_Sayem

    string s;
    int h, k = 1;
    cin>>h>>s;

    int root = 1, node, hight = 0;
    for (int i = 0; i < h; i++){
        root *= 2;
        root++;
    }
    
    node = root;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'L'){
            node-=k;
            k+= k;
        }    
        else {   
            node -= (k+1);
            k += (k+1);
        }   
    }
    
    cout<<node;

    return 0;
}
