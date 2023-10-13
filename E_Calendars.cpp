#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int noOfCal, p, q, cal1, cal2, x;
    cin>>noOfCal;

    vector < vector <ll> > months(noOfCal), days(noOfCal);
    for (size_t i = 0; i < noOfCal; i++){
        cin>>p;

        for (size_t j = 0; j < p; j++){
            cin>>x;
            months[i].push_back(x);

            if (j){
                days[i].push_back(days[i][j-1] + months[i][j]);
            }  
            else {
                days[i].push_back(months[i][j]);
            }  

            //cout<<days[i][j]<<" ";
        } 
        //cout<<"\n";
    }
    
    cin>>q;
    int gDay, gMonth, gYear, currDay, currMonth, currYear;
    while (q--){
        cin>>cal1>>cal2;
        cin>>gDay>>gYear>>gMonth;

        
    }
    
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    for (int i = 1; i <= tc; i++){
        //cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
