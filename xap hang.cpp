#include <iostream>
#include <algorithm>

// xep hang

struct Time{
	int start, end;
};

// sap xep thoi gian bat dau tang dan
bool compare(Time a, Time b){
	return a.start < b.start;
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int N;
		std::cin >> N;
		Time cus[N];
		for(int i = 0; i < N; i++){
			std::cin >> cus[i].start >> cus[i].end;
		}
		std::sort(cus, cus + N, compare);
		int Sumtime = 0;
		for(int i = 0; i < N; i++){
			if(cus[i].start > Sumtime) Sumtime = cus[i].start + cus[i].end;
			else Sumtime += cus[i].end;
		}
		std::cout << Sumtime << std::endl;
	}
	return 0;
}