#include <iostream>

// xau nhi phan ke tiep

std::string binary;

void next_binary(){
	int idex = binary.length() - 1;
	while(idex >= 0 && binary[idex] == '1'){
		binary[idex] = '0';
		--idex;
	}
	if(idex >= 0){
		binary[idex] = '1';
	}
	std::cout << binary << std::endl;
	return;
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		std::cin >> binary;
		next_binary();
	}
	return 0;
}