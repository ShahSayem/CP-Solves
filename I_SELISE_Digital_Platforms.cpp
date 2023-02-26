#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;

const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000+5;

//int dp[MAX];
//int arr[MAX];
//int tree[4*MAX+1];

///.........Graph.........///
//vector <int> adj[MAX];
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    string s, s2 = "SELISE", s3 = "SELISE Digital Platforms";
    getline(cin, s);

    int cntS = 0, cntE = 0, cntL = 0, cntI = 0, cntD = 0, cntP = 0, cnti = 0, cntg = 0, cntt = 0, cnta = 0, cntl = 0;
    int cntf = 0, cnto = 0, cntr = 0, cntm = 0, cnts = 0, space = 0;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'S'){
            cntS++;
        }
        else if (s[i] == 'E'){
            cntE++;
        }
        else if (s[i] == 'L'){
            cntL++;
        }
        else if (s[i] == 'I'){
            cntI++;
        }
        else if (s[i] == 'D'){
            cntD++;
        }
        else if (s[i] == 'P'){
            cntP++;
        }
        else if (s[i] == 'i'){
            cnti++;
        }
        else if (s[i] == 'g'){
            cntg++;
        }
        else if (s[i] == 't'){
            cntt++;
        }
        else if (s[i] == 'a'){
            cnta++;
        }
        else if (s[i] == 'l'){
            cntl++;
        }
        else if (s[i] == 'f'){
            cntf++;
        }
        else if (s[i] == 'o'){
            cnto++;
        }
        else if (s[i] == 'r'){
            cntr++;
        }
        else if (s[i] == 'm'){
            cntm++;
        }
        else if (s[i] == 's'){
            cnts++;
        }
        else if (s[i] == ' '){
            space++;
        }
    }
    
    bool con1 = 0, con2 = 0;

    if (cntE > 1 && cntS > 1 && cntL && cntI && cntD && cntP && cnts && cntm && cntr && cnto && cntf && cntl > 1 && cnta > 1 && cntt > 1 && cntg && cnti > 1 && space > 1){
        con1 = 1;
        // cntS-=2, cntE-=2, cntL--, cntI--;
    }

    //cout <<cntE<<" "<<cntS<<" "<<cntL<<" "<<cntI<<"\n";
    else if (cntE > 1 && cntS > 1 && cntL > 0 && cntI > 0){
        con2 = 1;
    }
    
    if (con1){
        cout<<"BOTH";
    }
    else if (con2){
        cout<<s2;
    }
    else {
        cout<<"NONE";
    }
    //cout<<s;
}

int main()
{
    Shah_Sayem

    int t = 1;
    cin>>t;
    cin.ignore();
    for (int i = 1; i <= t; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
