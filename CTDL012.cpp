#include <iostream>
#include <vector>

// boi so

typedef long long ll;

// khai bao mang cac boi cua cac so tu 1 -> 500
ll bs[505];
// khai bao vector luu ket qua
std::vector <ll> res;
// khai bao bien dung
int stop;

void sinh(std::string &s){
	int i = s.length() - 1;
	while(i >= 0 && s[i] == '9'){
		s[i] = '0';
		i--;
	}
	if(i == -1) stop = 0;
	else s[i] = '9';
}

int main(){
	std::string s(13, '0');
	stop = 1;
	sinh(s);
	while(stop){
		res.push_back(stoll(s));
		sinh(s);
	}
	for(int i = 1; i <= 500; i++){
		for(ll x : res){
			if(bs[i] == 0 && x % i == 0){
				bs[i] = x;
			}
		} 
	}
	int test;
	std::cin >> test;
	while(test--){
		int n;
		std::cin >> n;
		std::cout << bs[n] << std::endl;
	}
	return 0;
}