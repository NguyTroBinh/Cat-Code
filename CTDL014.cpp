#include <iostream>

// luy thua ma tran 2

const int MOD = 1e9 + 7;
int N;
typedef long long ll;

struct matrix{
	ll c[11][11];
};

// nhan hai ma tran
matrix operator * (matrix a, matrix b){
	matrix res;
	for(int i = 0; i < N; i++){
		for(int j = 0; j < N; j++){
			res.c[i][j] = 0;
			for(int k = 0; k < N; k++){
				res.c[i][j] += a.c[i][k] * b.c[k][j];
				res.c[i][j] %= MOD;
			}
		}
	}
	return res;
}

// luy thua ma tran
matrix mul(matrix a, int k){
	if(k == 1) return a;
	if(k % 2 != 0) return mul(a, k - 1) * a;
	matrix res = mul(a, k / 2);
	return res * res;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		int K;
		std::cin >> N >> K;
		matrix a;
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				std::cin >> a.c[i][j];
			}
		}
		matrix b = mul(a, K);
		ll sum = 0;
		for(int i = 0; i < N; i++){
			for(int j = 0; j < N; j++){
				if(i + j == N - 1){
					sum += b.c[i][j];
					sum %= MOD;
				}
			}
		}
		std::cout << sum << std::endl;
	}
	return 0;
}