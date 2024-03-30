#include <iostream>

// sap xep quan hau 2
// Cho ban co 8 x 8, dat 8 quan hau len ban co sao cho chung khong an nhau va so diem dat duoc la lon nhat

int A[10][10], col[10], c[10], DCC[10], DCP[10], MAX = 0;

// ham khoi tao
void Init(){
	for(int i = 1; i <= 8; i++) col[i] = 1;
	for(int i = 1; i < 16; i++){
		DCC[i] = 1;
		DCP[i] = 1;
	}
	for(int i = 1; i <= 8; i++){
		for(int j = 1; j <= 8; j++) std::cin >> A[i][j];
	}
}

// ham cap nhat ket qua
void Result(){
	int Sum = 0;
	for(int i = 1; i <= 8; i++){
		Sum += A[i][c[i]];
	}
	if(Sum > MAX) MAX = Sum;
}

// ham de qui
void Try(int i){
	for(int j = 1; j <= 8; j++){
		// kiem tra quan hau co bi an hay khong ?
		if(col[j] == 1 && DCC[i - j + 8] == 1 && DCP[i + j - 1] == 1){
			c[i] = j;  // luu lai vi tri cot j
			// danh dau la da tham
			col[j] = 0;
			DCC[i - j + 8] = 0;
			DCP[i + j - 1] = 0;
			if(i == 8){
				Result();
			}
			else Try(i + 1);
			col[j] = 1;
			DCC[i - j + 8] = 1;
			DCP[i + j - 1] = 1;
		} 
	}
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		Init();
		Try(1);
		std::cout << MAX << std::endl;
		MAX = 0;
	}
	return 0;
}