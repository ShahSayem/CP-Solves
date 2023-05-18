#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double sum = 0;
    vector <double> vec;
    for (int i = 0; i < n; i++){
        double j;
        cin>>j;

        vec.push_back(j);
        sum += vec[i];
    }
    
    cout<<sum/n;
    return 0;
}
