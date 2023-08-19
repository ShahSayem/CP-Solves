#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
    Shah_Sayem
    int n, m;
    cin>>n>>m;

    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }

    while (true){
        if (n%2){
            cout<<n<<"\n";
            return 0;
        }

        for (int i = 0; i < n/2; i++){
            for (int j = 0; j < m; j++){
                if (arr[i][j] != arr[n-i-1][j]){
                    cout<<n<<"\n";
                    return 0;
                }
            }
        }
        n /= 2;
    }

    return 0;
}
