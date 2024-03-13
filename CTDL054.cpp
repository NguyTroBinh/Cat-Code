#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cfloat>

// cap diem gan nhat

typedef double db;

struct Point{
	// hoanh do va tung do
	int x, y;
};

// tinh khoang cach giua hai diem
db distance(Point p1, Point p2){
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

// xap sep cac diem theo hoanh do tang dan
bool compareX(Point p1, Point p2){
	return p1.x < p2.x;
}

// xap sep cac diem theo tung do tang dan
bool compareY(Point p1, Point p2){
	return p1.y < p2.y;
}

db minDistance(std::vector<Point>&points, int left, int right){
	if(right - left <= 3){
		db minDist = DBL_MAX;
		for(int i = left; i <= right; i++){
			for(int j = i + 1; j <= right; j++){
				minDist = std::min(minDist, distance(points[i], points[j]));
			}
		}
		return minDist;
	}
	// chia doi thanh 2 tap 
	int mid = (left + right) / 2;
	// tim khoang cach nho nhat cua moi tap
	db leftDist = minDistance(points, left, mid);
	db rightDist = minDistance(points, mid + 1, right);
	db minDist = std::min(leftDist, rightDist);
	// tim khoang cach nho nhat cua dai (hop cua hai tap)
	std::vector<Point> strip;
	for(int i = left; i <= right; i++){
		if(abs(points[i].x - points[mid].x) < minDist){
			// neu diem dang xet nam trong dai thi dua vao strip
			strip.push_back(points[i]);
		}
	}
	sort(strip.begin(), strip.end(), compareY);
	// tim khoang cach nho nhat trong dai
	for(int i = 0; i < strip.size(); i++){
		for(int j = i + 1; j < strip.size() && (strip[j].y - strip[i].y) < minDist; j++){
			minDist = std::min(minDist, distance(strip[i], strip[j]));
		}
	}
	return minDist;
}

int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(0);
	std::cout.tie(0);
	int test;
	std::cin >> test;
	while(test--){
		int N;
		std::cin >> N;
		std::vector<Point> points(N);
		// nhap vao toa do cac diem
		for(int i = 0; i < N; i++){
			std::cin >> points[i].x >> points[i].y;
		}
		sort(points.begin(), points.end(), compareX);
		db minDist = minDistance(points, 0, N - 1);
		std::cout << std::fixed;
		std::cout.precision(6);
		std::cout << minDist << " " << std::endl;
	}
	return 0;
}