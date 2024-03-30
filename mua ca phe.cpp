#include <iostream>
#include <algorithm>

// Mua ca phe 

int main(){
	int test;
	std::cin >> test;
	int n, q;
	std::cin >> n;
	int X[n];
	for(int i = 0; i < n; i++) std::cin >> X[i];
	std::sort(X, X + n);
	std::cin >> q;
	int Y[q];
	for(int i = 0; i < q; i++) std::cin >> Y[i];
	for(int i = 0; i < q; i++){
		if(Y[i] < X[0]) std::cout << "0" << std::endl;
		else std::cout << std::upper_bound(X, X + n, Y[i]) - X << std::endl;
	}
	return 0;
}