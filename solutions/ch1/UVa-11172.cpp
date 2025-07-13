#include <bits/stdc++.h>

using namespace std;

int main(){
	int TC, a, b, t = 1;

	cin >> TC;
	while (TC--){
		cin >> a >> b;
		if(a > b){
			cout << ">";
		}else if(a == b){
			cout << "=";
		}else{
			cout << "<";
		}
		cout << "\n";
	}
}