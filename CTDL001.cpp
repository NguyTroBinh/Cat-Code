#include <iostream>

// sinh xau nhi phan n bit

int n, stop, binary[35];

// khoi tao xau nhi phan dau tien
void setup(){
	for(int i = 1; i <= n; i++){
		binary[i] = 0;
	}
	return;
}

// sinh cac xau nhi phan tiep theo
void next_binary(){
	int i = n;
	while(i >= 1 && binary[i] == 1){
		binary[i] = 0;
		i--;
	}
	if(i == 0){
		// ket thuc sinh xau nhi phan
		stop = 0;
	}
	else binary[i] = 1;
	return;
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		std::cin >> n;
		setup();
		stop = 1;
		while(stop){
			// khi nao stop = 1 -> tiep tuc sinh xau nhi phan
			for(int i = 1; i <= n; i++){
				std::cout << binary[i] << " ";
			}
			std::cout << std::endl;
			next_binary();
		}
	}
	return 0;
}