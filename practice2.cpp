#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int solve(string& s, int pos, int prev, unordered_map<string, int>& memo) {
    // Base case: if we have reached the end of the string
    if (pos == s.length()) {
        return 0;
    }

    // Check if the subproblem has already been solved
    string key = to_string(pos) + "-" + to_string(prev);
    if (memo.find(key) != memo.end()) {
        return memo[key];
    }

    // Initialize the minimum operations to a large value
    int minOperations = INT_MAX;

    // If the current character is the same as the previous character
    if (s[pos] == s[prev]) {
        // Make the current character different from the previous one
        minOperations = min(minOperations, solve(s, pos + 1, pos + 1, memo) + 1);
    }

    // No operation is required, move to the next character
    minOperations = min(minOperations, solve(s, pos + 1, prev, memo));

    // Memoize the result
    memo[key] = minOperations;

    return minOperations;
}

int main() {
    string s;
    cin >> s;

    unordered_map<string, int> memo;
    int minOperations = solve(s, 0, -1, memo);

    cout << minOperations << endl;

    return 0;
}
