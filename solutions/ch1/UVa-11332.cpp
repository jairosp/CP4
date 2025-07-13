#include <bits/stdc++.h>

using namespace std;

int digitSum(int n){
	int sum = 0;
	while(n > 0){
		sum += n % 10;
		n /= 10;
	}
	if(sum > 9){
		return digitSum(sum);
	}
	return sum;
}

int main(){
	int a;
	cin >> a;
	while(a != 0){
		cout << digitSum(a) << "\n";
		cin >> a;
	}

}