#include <bits/stdc++.h>

using namespace std;

int main(){
	int TC, minScore, N, curr, maxDiff;

	cin >> TC;
	while (TC--){
		maxDiff = -1e6;
		minScore = -1e6;
		cin >> N;
		int c = 1;
		while(N--){
			cin >> curr;
			if(c++ > 1){
				maxDiff = max(maxDiff, minScore - curr);
			}
			minScore = max(minScore, curr);
		}
		cout << maxDiff << "\n";
	}
}