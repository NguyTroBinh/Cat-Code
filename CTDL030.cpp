#include <iostream>

// doi cho xau ki tu

int main(){
	int test;
	std::cin >> test;
	while(test--){
		std::string s;
		int k;
		std::cin >> k >> s;
			for(int i = 0; i < s.length() - 1 && k > 0; i++){
				int idex = i, check = 0;
				for(int j = i + 1; j < s.length(); j++){
					if(s[j] >= s[idex]){
						check = 1;
						idex = j;
					}
				}
				if(check == 1){
					std::swap(s[idex], s[i]);
					k--;
				}
			}
		std::cout << s << std::endl;
	}
	return 0;
}