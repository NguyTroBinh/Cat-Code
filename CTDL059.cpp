#include <iostream>
#include <map>

// phan tu khac nhau

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		int N;
		std::cin >> N;
		long long a[N], b[N - 1];
		std::map<int, bool> mp;
		for(int i = 0; i < N; i++) std::cin >> a[i];
		for(int i = 0; i < N - 1; i++){
			std::cin >> b[i];
			mp[b[i]] = true;
		}
		for(int i = 0; i < N; i++){
			if(mp[a[i]] == false){
				std::cout << i + 1 << std::endl;
				break;
			}
		}
	}
	return 0;
}