#include <bits/stdc++.h>
using namespace std;

int main() {
    int TC;
    cin >> TC;

    while (TC--) {
        int water = 0;
        stack<int> st;

        string line;
        cin >> line;

        for (int i = 0; i < line.size(); i++) {
            char ch = line[i];
            if (ch == '_') {
                continue;
            } else if (ch == '\\') {
                st.push(i);
            } else if (ch == '/') {
                if (!st.empty()) {
                    int last = st.top();
                    st.pop();
                    water += i - last;
                }
            }
        }
        cout << water << endl;
    }
}
