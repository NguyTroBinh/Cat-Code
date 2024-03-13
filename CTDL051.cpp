#include <iostream>

// day xau fibonaci

int n;
long long i, fibo[95];

// xay dung mang fibonaci (1 < N < 93)
void build_arrayFibo(){
	fibo[0] = 0;
	fibo[1] = 1;
	for(int idex = 2; idex <= 93; idex++){
		fibo[idex] = fibo[idex - 2] + fibo[idex - 1];
	}
	return;
}

// tim kiem phan tu trong mang fibo
char find(long long fibo[], int n, long long i){
	// dieu kien dung
	if(n == 1) return 'A';
	if(n == 2) return 'B';
	// de quy
	if(i <= fibo[n - 2]) find(fibo, n - 2, i);
	else find(fibo, n - 1, i - fibo[n - 2]);
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	build_arrayFibo();
	int test;
	std::cin >> test;
	while(test--){
		std::cin >> n >> i;
		std::cout << find(fibo, n, i) << std::endl;
	}
	return 0;
}