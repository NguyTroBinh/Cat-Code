#include <iostream>
#include <algorithm>
#include <cmath>

// he co so k

// chuyen tu co so k sang co so 10
int to_decima(std::string s, int k){
	int res = 0, j = s.length() - 1;
	for(int i = 0; i < s.length(); i++){
		res = res +  (s[i] - '0') *  pow(k, j);
		j--;
	}
	return res;
}

// chuyen tu co so 10 sang co so k
std::string decima_to(int n, int k){
	std::string res = "";
	while(n){
		int tmp = n % k;
		res = std::to_string(tmp) + res;
		n /= k;
	}
	return res;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		int k;
		std::string A, B;
		std::cin >> k >> A >> B;
		if(k != 10){
			// chuyen A va b sang co so 10
			int X = to_decima(A, k);
			int Y = to_decima(B, k);
			int Z = X + Y;
			// tra ve ket qua dang co so k
			std::cout << decima_to(Z, k) << std::endl;
		}
		else{
			int X = stoi(A);
			int Y = stoi(B);
			std::cout << X + Y << std::endl; 
		}
	}
	return 0;
}