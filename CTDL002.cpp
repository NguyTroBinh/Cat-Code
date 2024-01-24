#include <iostream>

// chuoi nhi phan theo hop le

int n, stop, bnr[1005];

void setup(){
	for(int i = 1; i <= n; i++){
		bnr[i] = 0;
	}
	return;
}

void next_binary(){
	int i = n;
	while(i >= 1 && bnr[i] == 1){
		bnr[i] = 0;
		i--;
	}
	if(i == 0){
		stop = 0;
	}
	else bnr[i] = 1;
	return;
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		std::string s;
		std::cin >> s;
		n = 0;     // dem dau ? trong xau nhi phan s
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '?') n++;
		}
		setup();
		stop = 1;
		while(stop){
			int k = 1;
			for(int i = 0; i < s.length(); i++){
				if(s[i] == '?'){
					std::cout << bnr[k];
					k++;
				}
				else std::cout << s[i];
			}
			std::cout << std::endl;
			next_binary();
		}
	}
	return 0;
}