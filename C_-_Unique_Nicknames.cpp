#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, count;
    count = 0;
    cin>>n;

    vector <string> s;
    vector <string> f;

    for (int i = 0; i < n; i++){
        string x, y;
        cin>>x;
        s.push_back(x);

        cin>>y;
        f.push_back(y);
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((s[i] == s[j] || s[i] == f[j]) || (f[i] != s[j] && f[i] != f[j])){
                continue;
            }
            
        }
    }
    
    cout<<"Yes"<<endl;

    return 0;
}
    