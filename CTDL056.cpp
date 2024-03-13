#include <iostream>
#include <cmath>

// tich nhi phan

// chuyen tu nhi phan sang thap phan
int binary_to_decima(std::string s){
	int res = 0, k = s.length() - 1;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == '1') res += pow(2, k);
		k--;
	}
	return res;
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		std::string A, B;
		std::cin >> A >> B;
		int X = binary_to_decima(A);
		int Y = binary_to_decima(B);
		std::cout << X * Y << std::endl;
	}
	return 0;
}