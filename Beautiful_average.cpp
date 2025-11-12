#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> e(n);
        for (int i=0;i<n;i++) 
            cin >> e[i];
        cout << *max_element(e.begin(), e.end()) <<endl;
    }   
    return 0;
}