	#include <bits/stdc++.h>
	using namespace std;

	int main() {
		int N;
		string line;
		cin >> N;

		vector<int> res;
		string dummy;
		cin >> dummy;
		cin >> dummy;
		cin >> dummy;
		cin >> line;
		for(int i = 0; i < N; i++){

			if(line[4*i + 2] == '*'){
				res.push_back(3);
			}else if(line[4*i + 1] == '*'){
				res.push_back(1);
			}else{
				res.push_back(2);
			}
		}
		for(int num: res){
			cout << num;
		}
		cout << '\n';
	}
