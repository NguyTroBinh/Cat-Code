#include <iostream>

// mua luong thuc

int cnt_min_day(int N, int S, int M){
	// so ngay nhieu nhat co the mua luong thuc
	int max_day = S - (int)(S / 7);
	// so luong thuc tieu thu trong S ngay
	int total_food = M * S;
	if(total_food > max_day * N) return -1;  // bi chet doi
	else if(total_food == max_day * N) return max_day;
	else{
		int result;
		if(total_food % N == 0){
			result = total_food / N;
		}
		else{
			result = 1 + (int)(total_food / N);
		}
		return result;
	}
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		int N, S, M;
		std::cin >> N >> S >> M;
		std::cout << cnt_min_day(N, S, M) << std::endl;
	}
	return 0;
}