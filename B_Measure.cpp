#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


int main()
{
    Shah_Sayem
    
    int n;
    cin>>n;
    for (int i = 0; i <= n; i++){
        if (i == 0){
            cout<<1;
            continue;
        }
        for (int j = 1; j < 10; j++){
            if ((n%j == 0) && (i%(n/j) == 0)){
                cout<<j;
                break;
            }

            if (j == 9){
                cout<<'-';
            }
        }        
    }   

    return 0;
}
