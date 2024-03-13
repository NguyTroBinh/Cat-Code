#include <iostream>

// doi cho xau ki tu

void swapk(){
	std::string s;
	int k;
	std::cin >> k >> s;
	if(k >= s.size()) k = s.size();
	for(int i = 0; i < k; i++){
		int tmp = i, j = s.size();
		while(j-- > i){
			if(s[j] > s[tmp]) tmp = j;
		}
		if(tmp != i) std::swap(s[i], s[tmp]);
	} 
	std::cout << s << std::endl;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		swapk();
	}
	return 0;
}