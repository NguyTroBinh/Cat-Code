#include <iostream>

// to hop

int n, k, th[20], stop;

void setup(){
	for(int i = 1; i <= k; i++){
		th[i] = i;
	}
	return;
}

void sinh(){
	int i = k;
	while(i >= 1 && th[i] == n - k + i){
		--i;
	}
	if(i == 0){
		stop = 0;
	}
	else{
		th[i]++;
		for(int j = i + 1; j <= k; j++){
			th[j] = th[j - 1] + 1;
		}
	}
	return;
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		std::cin >> n >> k;
		setup();
		stop = 1;
		while(stop){
			for(int i = 1; i <= k; i++){
				std::cout << th[i];
			}
			std::cout << " ";
			sinh();
		}
		std::cout << std::endl;
	}
	return 0;
}