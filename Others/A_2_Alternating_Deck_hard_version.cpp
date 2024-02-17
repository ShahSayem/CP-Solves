#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

//int dp[MAX];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    int n, aliceW = 0, aliceB = 0, bobW = 0, bobB = 0;
    cin>>n;

    int cntW = 1, cntB = 0, totalW = n-(n/2)-1, totalB = n/2, i = 1;
    aliceW = 1;
    while (totalW || totalB){
        if (i%2){
            cntB++;
            if (totalW < cntW || totalB < cntB){
                bobW += totalW;
                bobB += totalB;
                totalW = 0;
                totalB = 0;
                break;
            }
            bobW += cntW;
            bobB += cntB;
            totalW -= cntW;
            totalB -= cntB;
            
            cntB++;
            if (totalW < cntW || totalB < cntB){
                bobW += totalW;
                bobB += totalB;
                totalW = 0;
                totalB = 0;
                break;
            }
            bobW += cntW;
            bobB += cntB;
            totalW -= cntW;
            totalB -= cntB;
        }
        else {
            cntW++;
            if (totalW < cntW || totalB < cntB){
                aliceW += totalW;
                aliceB += totalB;
                totalW = 0;
                totalB = 0;
                break;
            }
            aliceW += cntW;
            aliceB += cntB;
            totalW -= cntW;
            totalB -= cntB;

            cntW++;
            if (totalW < cntW || totalB < cntB){
                aliceW += totalW;
                aliceB += totalB;
                totalW = 0;
                totalB = 0;
                break;
            }
            aliceW += cntW;
            aliceB += cntB;
            totalW -= cntW;
            totalB -= cntB;
        }

        i++;
    }
    
    cout<<aliceW<<" "<<aliceB<<" "<< bobW<<" "<<bobB;
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
