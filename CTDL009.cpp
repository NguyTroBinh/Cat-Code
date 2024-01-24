#include <iostream>

// ma gray 003

std::string Gray_to_Binary(std::string gray){
	std::string binary = "";
	// bit dau tien cua binary = bit dau tien cua gray
	binary += gray[0];
	/* duyet tu bit thu hai cua ma gray, bit dang xet cua ma nhi phan = bit dang
	xet cua ma gray XOR voi bit truoc do cua ma nhi phan */
	for(int i = 1; i < gray.length(); i++){
		if(gray[i] == binary[binary.length() - 1]){
			binary += "0";
		}
		else{
			binary += "1";
		}
	}
	return binary;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		std::string gray;
		std::cin >> gray;
		std::cout << Gray_to_Binary(gray) << std::endl;
	}
	return 0;
}