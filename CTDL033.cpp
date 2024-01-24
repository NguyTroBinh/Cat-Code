#include <iostream>

// tim so nguyen thoa man dieu kien

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int a1, b1, a2, b2;
		std::cin >> a1 >> b1 >> a2 >> b2;
		long long k = 1;
		while(k){
			// duyet cac boi cua a2 tu nho den lon
			long long B = a2 * k;
			long long tmp1 = B - b1 + b2, tmp2 = a1 + a2;
			// kiem tra xem x1 co nguyen hay khong ?
			if(tmp1 % tmp2 == 0){
				long long x1 = tmp1 / tmp2;
				long long x2 = k - x1;
				// in ra gia tri x1 va x2
				std::cout << x1 << " " << x2;
				break;
			}
			else k++;   // duyet den boi so tiep theo
		}
		std::cout << std::endl;
	}
	return 0;
}