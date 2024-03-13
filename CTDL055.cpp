#include <iostream>

// so fibonacci thu n

/* ung dung cua bai toan luy thua ma tran:
Xet ma tran co so: A = [ 0 1; 1 1]
So Fibonacci thu n la vi tri A(0,1) cua ma tran pow(A, n)
*/
typedef long long ll;
const int MOD = 1e9 + 7;

struct matrix{
    ll c[2][2];
    // ma tra co so
	matrix(){
		c[0][0] = 0;
		c[0][1] = 1;
		c[1][0] = 1;
		c[1][1] = 1;
	}	
};

// nhan hai ma tran
matrix operator * (matrix A, matrix B){
	matrix res;
	for(int i = 0; i <= 1; i++){
		for(int j = 0; j <= 1; j++){
			res.c[i][j] = 0;
			for(int k = 0; k <= 1; k++){
				res.c[i][j] = (res.c[i][j] + A.c[i][k] * B.c[k][j]) % MOD;
			}
		}
	}
	return res;
}

// luy thua ma tran
matrix Pow_matrix(matrix C, ll k){
	if(k == 1) return C;
	if(k % 2 != 0) return Pow_matrix(C, k - 1) * C;
	matrix ans = Pow_matrix(C, k / 2);
	return ans * ans;
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		ll n;
		std::cin >> n;
		matrix res;
		res = Pow_matrix(res, n);
		std::cout << res.c[0][1] << std::endl;
	}
	return 0;
}