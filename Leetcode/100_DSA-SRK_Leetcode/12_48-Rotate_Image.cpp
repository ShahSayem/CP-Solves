#include <bits/stdc++.h>
using namespace std;

vector <vector <int>> solve(vector <vector <int>> & matrix){

    for (int i = 0; i < matrix.size(); i++){
        for (int j = 0; j < i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }   
    }

    for (int i = 0; i < matrix.size(); i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
    
    return matrix;  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x, n;
    cin>>n;

    vector <vector <int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin>>x;
            matrix[i][j] = x;
        }
    }

    vector <vector <int>> ans = solve(matrix);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }   

    return 0;
}