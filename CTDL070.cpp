#include <iostream>

// bo di xem phim

int N, C, W[110], res = 0;

void bodixemphim(int idex, int KL){
	if(idex > N) return;
	if(KL <= C){
		res = std::max(res, KL);
	}
	bodixemphim(idex + 1, KL + W[idex]);
	bodixemphim(idex + 1, KL);
}


int main(){
	int t;
	std::cin >> t;
	while(t--){
	    std::cin >> C >> N;
	    for(int i = 0; i < N; i++){
	    	std::cin >> W[i];
		}
		bodixemphim(0, 0);
		std::cout << res << std::endl;
		res = 0;
	}
	return 0;
}