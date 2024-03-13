#include <iostream>

// xau con doi xung dai nhat

int Xaucondoixung(std::string s){
	int n = s.length();
	// mang 2D chua cac xau con doi xung tu chi so i den chi so j
	int dp[n][n];
	// khoi tao cac xau con ngan nhat 
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i == j) dp[i][j] = 1;
			else dp[i][j] = 0;
		}
	}
	// duyet cac xau con co do dai > 2
	for(int len = 2; len <= n; len++){
		// duyet tung ki tu cua xau S
		for(int i = 0; i < n - len + 1; i++){
			int j = i + len - 1;
			if(s[i] == s[j] && len == 2) dp[i][j] = 2;
			else if(s[i] == s[j]) dp[i][j] = dp[i + 1][j - 1] + 2;
			else dp[i][j] = std::max(dp[i + 1][j], dp[i][j - 1]);
		}
	}
	return dp[0][n - 1];
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		std::string s;
		std::cin >> s;
		std::cout << Xaucondoixung(s) << std::endl;
	}
	return 0;
}