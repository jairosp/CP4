#include <bits/stdc++.h>

using namespace std;

int main(){
	int TC, score, currVal;
	string s;

	cin >> TC;
	while(TC--){
		cin >> s;
		currVal = 0;
		score = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == 'O'){
				score += ++currVal;
			}else{
				currVal = 0;
			}
		}
		cout << score << '\n';
	}
	return 0;
}