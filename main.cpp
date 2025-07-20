#include <bits/stdc++.h>

using namespace std;

string next_dir(const string& current, const string& bend) {
    if (bend == "No") return current;

    if (current == "+x") return bend;
    if (current == "-x") {
        if (bend[0] == '+') return "-" + bend.substr(1);
        else return "+" + bend.substr(1);
    }
    if (current == "+y") {
        if (bend == "+y") return "-x";
        if (bend == "-y") return "+x";
    }
    if (current == "-y") {
        if (bend == "+y") return "+x";
        if (bend == "-y") return "-x";
    }
    if (current == "+z") {
        if (bend == "+z") return "-x";
        if (bend == "-z") return "+x";
    }
    if (current == "-z") {
        if (bend == "+z") return "+x";
        if (bend == "-z") return "-x";
    }

    return current;
}

int main() {
    int L;
    while (cin >> L, L) {
        string current = "+x";
        for (int i = 1; i < L; ++i) {
            string bend;
            cin >> bend;
            current = next_dir(current, bend);
        }
        cout << current << '\n';
    }
    return 0;
}
