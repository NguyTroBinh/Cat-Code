#include <iostream>

// phan so don vi

typedef long long ll;

int main(){
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		ll tuso, mauso;
		std::cin >> tuso >> mauso;
		while(1){
			if(mauso % tuso == 0){
				std::cout << "1/" << mauso / tuso << std::endl;
				break;
			}
			else{
				ll tmp = mauso / tuso + 1;
				std::cout << "1/" << tmp << " + ";
				// cap nhat tu so va mau so moi
				tuso = tuso * tmp - mauso;
				mauso = mauso * tmp;
			}
		}
	}
	return 0;
}