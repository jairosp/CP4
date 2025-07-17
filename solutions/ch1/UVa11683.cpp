#include <bits/stdc++.h>
using namespace std;

int main() {
	int A, C;
	cin >> A >> C;
	while(A != 0 && C != 0){

		int res = 0;
		
		int prev_height = A;
		for(int i = 0; i < C; i++){
			int height;
			cin >> height;
			if(height < prev_height){
				res += prev_height - height;
			}
			prev_height = height;
		}
		cout << res << endl;
		cin >> A >> C;
	}
	
	return 0;
}
