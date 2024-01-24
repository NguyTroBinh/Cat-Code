#include <iostream>

// ma gray 002

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

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		std::string binary;
		std::cin >> binary;
		std::cout << Binary_to_Gray(binary) << std::endl;
	}
	return 0;
}