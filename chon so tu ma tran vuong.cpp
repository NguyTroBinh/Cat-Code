#include <iostream>
#include <algorithm>

// Chon so tu ma tran vuong cap N
// Cho ma tran vuong cap N va so K. Chon ra 1 so tu moi hang hoac moi cot cua ma tran sao cho co tong bang K
// In ra so cach tim duoc va vi tri cua moi so trong hang

int main(){
	std::ios_base::sync_with_stdio();
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		int N, k;
		std::cin >> N >> k;
		int a[N + 1][N + 1], b[N + 1];
		for(int i = 1; i <= N; i++){
			// khoi tao cau hinh dau tien cho mang b
			b[i] = i;
			for(int j = 1; j <= N; j++) std::cin >> a[i][j];
		}
		int count = 0;  // dem so ket qua tim duoc
		do{
			int tmp = 0;
			for(int i = 1; i <= N; i++){
				// moi hang se lay ra 1 so va cong vao bien tmp
				tmp += a[i][b[i]];
			}
			if(tmp == k) count++;
		}while(std::next_permutation(b + 1, b + 1 + N));
		std::cout << count << std::endl;
		// reset lai mang b
		for(int i = 1; i <= N; i++) b[i] = i;
		do{
			int tmp = 0;
			for(int i = 1; i <= N; i++){
				// moi hang se lay ra 1 so va cong vao bien tmp
				tmp += a[i][b[i]];
			}
			if(tmp == k){
				for(int i = 1; i <= N; i++) std::cout << b[i] << " ";
				std::cout << std::endl;
			}
		}while(std::next_permutation(b + 1, b + 1 + N));
	}
	return 0;
}