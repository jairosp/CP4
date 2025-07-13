#include <bits/stdc++.h>
using namespace std;

int main() {
    int TC, n;
    cin >> TC;

    while (TC--) {
        cin >> n;
        vector<string> instructions;
        int p = 0;

        for (int i = 0; i < n; i++) {
            string currInstruction;
            cin >> currInstruction;

            if (currInstruction == "LEFT") {
                instructions.push_back(currInstruction);
                p--;
            }
            else if (currInstruction == "RIGHT") {
                instructions.push_back(currInstruction);
                p++;
            }
            else {
                string dummy; 
                int digit;
                cin >> dummy >> digit;

                string repeated = instructions[digit - 1];
                instructions.push_back(repeated);

                if (repeated == "RIGHT") p++;
                else if (repeated == "LEFT") p--;
            }
        }

        cout << p << '\n';
    }

    return 0;
}
