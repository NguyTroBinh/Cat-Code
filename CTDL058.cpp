#include <iostream>
#include <vector>

// phan tu thu K

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		int N, M, K;
		std::cin >> N >> M >> K;
		std::vector<int> va(N);
		for(int i = 0; i < N; i++){
			std::cin >> va[i];
		}
		std::vector<int> vb(M);
		for(int i = 0; i < M; i++){
			std::cin >> vb[i];
		}
		std::vector<int> v;
		int i = 0, j = 0;
		while(i < N && j < M){
			if(va[i] < vb[j]){
				v.push_back(va[i]);
				i++;
			}
			else if(va[i] > vb[j]){
				v.push_back(vb[j]);
				j++;
			}
			else{
				v.push_back(va[i]);
				v.push_back(vb[j]);
				i++;
				j++;
			}
		}
		while(i < N){
			v.push_back(va[i]);
			i++;
		}
		while(j < M){
			v.push_back(vb[j]);
			j++;
		}
		std::cout << v[K - 1];
		std::cout << std::endl;
	}
	return 0;
}