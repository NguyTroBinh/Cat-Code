#include <iostream>

// so may man

void find_lucky_number(int N){
	int check = 0, number_4, number_7;
	for(int i = N / 7; i >= 0; i--){
		if((N - i * 7) % 4 == 0){
			number_7 = i;
			number_4 = (N - i * 7) / 4;
			check = 1;
			break;
		}
	}
	if(check){
		for(int i = 1; i <= number_4; i++){
			std::cout << "4";
		}
		for(int i = 1; i <= number_7; i++){
			std::cout << "7";
		}
		std::cout << std::endl;
	}
	else std::cout << "-1" << std::endl;
	return;
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
		find_lucky_number(N);
	}
	return 0;
}
