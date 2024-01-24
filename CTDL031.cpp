#include <iostream>
#include <algorithm>
#include <cmath>

// ma gray 004

// ham chuyen doi tu thap phan sang nhi phan
std::string Decima_to_Binary(int N){
	std::string binary = "";
	while(N > 0){
		binary += std::to_string(N % 2);
		N /= 2;
	}
	std::reverse(binary.begin(), binary.end());
	return binary;
}

// ham chuyen tu nhi phan sang gray
std::string Binary_to_Gray(std::string binary){
	std::string gray = "";
	// bit dau tien ma gray = bit dau tien ma nhi phan
	gray += binary[0];
	// duyet tu bit thu hai cua ma nhi phan, bit dang xet XOR voi bit truoc do
	for(int i = 1; i < binary.length(); i++){
		if(binary[i] == binary[i - 1]){
			gray += "0";
		}
		else{
			gray += "1";
		}
	}
	return gray;
}

// ham chuyen tu gray sang thap phan
int Gray_to_Decima(std::string gray){
	int N = 0, k = gray.length() - 1;
	for(int i = 0; i < gray.length(); i++){
		if(gray[i] == '1'){
			N += pow(2, k);
		}
		k--;
	}
	return N;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		int N;
		std::cin >> N;
		std::string binary = Decima_to_Binary(N);
		std::string gray = Binary_to_Gray(binary);
		std::cout << Gray_to_Decima(gray) << std::endl;
	}
	return 0;
}