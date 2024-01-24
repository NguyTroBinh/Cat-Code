#include <iostream>
#include <algorithm>

// sap dat xau ki tu 1

bool check(std::string s){
	int cnt[26] = {0};
	// dem so lan xuat hien cac ki tu trong xau S
	for(int i = 0; i < s.length(); i++){
		cnt[s[i] - 'a']++;
	}
	// phan tu co so lan xuat hien nhieu nhat
	int f = *std::max_element(cnt, cnt + 26);
	if(f - 1 <= s.length() - f) return true;
	return false;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		std::string s;
		std::cin >> s;
		if(check(s)) std::cout << "1";
		else std::cout << "-1";
		std::cout << std::endl;
	}
	return 0;
}