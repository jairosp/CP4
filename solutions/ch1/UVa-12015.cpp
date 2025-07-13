#include <bits/stdc++.h>

using namespace std;

int main() {
    int TC, maxRel, currRel, c = 1;
    vector<pair<string, int>> data;

    cin >> TC;

    while (TC--) {
        string s;
        vector<string> ans;
        data.clear();
        maxRel = -1;

        for (int i = 0; i < 10; i++) {
            cin >> s >> currRel;
            data.push_back({s, currRel});  
            maxRel = max(currRel, maxRel);
        }

        for (int i = 0; i < 10; i++) {
            if (data[i].second == maxRel) {  
                ans.push_back(data[i].first);
            }
        }

        cout << "Case #" << c++ << ":\n";
        for (const string& url : ans) {
            cout << url << '\n';
        }
    }

    return 0;
}
