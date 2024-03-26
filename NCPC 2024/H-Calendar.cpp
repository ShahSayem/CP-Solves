#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


bool checkYear(int year)
{
    if (year % 400 == 0) {
        return true;
    }
    else if (year % 100 == 0) {
        return false;
    }
    else if (year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

void solve()
{
    int n;
    string s, day, x, z;
    cin>>s>>day;

    map <string, int> mp;
    mp["Sun"] = 0;
    mp["Mon"] = 1;
    mp["Tue"] = 2;
    mp["Wed"] = 3;
    mp["Thu"] = 4;
    mp["Fri"] = 5;
    mp["Sat"] = 6;

    vector <bool> end31 = {1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1};
                         //0  1  2  3  4  5  6  7  8  9  10 11 
    int date, month, year;
    
    date = ((s[0]-'0')*10) + (s[1]-'0');
    month = ((s[3]-'0')*10) + (s[4]-'0');
    year = ((s[6]-'0')*1000) + ((s[7]-'0')*100) + ((s[8]-'0')*10) + (s[9]-'0');
    n = s.size();

    bool isLeap = checkYear(year);
    //cout<<date<<" "<<month<<" "<<year<<" "<<day;
    string grid[5][7];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 7; j++){
            grid[i][j] = "-";
        }
    }
    
    int curr = 1, j, check = 0;
    for (int k = 0; k < 7; k++){
        for (int i = 0; i < 5; i++){
            j = 0;
            if (i == 0){
                j = k;
            }
            for (; j < 7; j++){
                x = to_string(curr);
                grid[i][j] = x;
                curr++;

                z = to_string(date);
                if (j == mp[day] && grid[i][j] == z){
                    check = 1;
                }
            }
        }

        if (check){
            for (int p = 0; p < k; p++){
                grid[0][p] = "-";
            }
            
            break;
        }

        curr = 1;
    }

    int idx = 0, isEnd = 0;
    if (grid[4][6] < "31" && (grid[4][6].size() != 1)){
        x = grid[4][6];
        curr = ((grid[4][6][0]-'0')*10) + (grid[4][6][1]-'0');
        curr++;

        while (curr <= 31){
            if (month == 2){
                if (isLeap){
                    if (curr == 30){
                        break;
                    }
                }
                else {
                    if (curr == 29){
                        break;
                    }
                }
            }
            else if (end31[month-1]){
                if (curr == 32){
                    break;
                }
            }
            else {
                if (curr == 31){
                    break;
                }
            }

            x = to_string(curr);
            grid[0][idx] = x;
            curr++, idx++;
        }
    }

    int w = 28;
    idx = 0;
    if (month == 2){
        if (isLeap){
            w = 29;

            while (curr < w){
                x = to_string(curr);
                grid[0][idx] = x;
                curr++, idx++;
            }
        }
    }

    int cnt = 0;
    cout<<"|---------------------------|\n";
    cout<<"|Sun|Mon|Tue|Wed|Thu|Fri|Sat|\n";
    cout<<"|---------------------------|\n";
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 7; j++){
            //Print
            if (!isEnd){ //print
                if (j == 0){
                    cout<<"|";
                }

                if (grid[i][j] == "-"){
                    cout<<" - "<<"|";
                }
                else if (grid[i][j].size() == 1)
                    cout<<"  "<<grid[i][j]<<"|";
                else // 2
                    cout<<" "<<grid[i][j]<<"|";
            }
            else { //End
                if (grid[i][j] == "-" || isEnd){
                    cout<<" - "<<"|";
                }
                else {
                    if (grid[i][j].size() == 1)
                        cout<<"  "<<grid[i][j]<<"|";
                    else // 2
                        cout<<" "<<grid[i][j]<<"|"; 
                }
            }


            if ((grid[i][j][0] >= '1') && (grid[i][j][0] <= '9')){
                cnt++;
            }

            if (month == 2){
                if (isLeap){
                    if (cnt == 29){
                        isEnd = 1;
                    }
                }
                else {
                    if (cnt == 28){
                        isEnd = 1;
                    }
                }
            }
            else if (end31[month-1]){
                if (cnt == 31){
                    isEnd = 1;
                }
            }
            else {
                if (cnt == 30){
                    isEnd = 1;
                }
            }

            // if (j == 6){
            //     cout<<"|\n";
            // }
        }
        cout<<"\n";
    }
    cout<<"|---------------------------|\n";
}

int main()
{
    //Shah_Sayem

    int tc = 1, x = 1;
    cin>>tc;
    while (tc--){
        //cout<<"Case "<<x++<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
