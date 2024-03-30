#include <iostream>

// sap xep day khong nhanh

typedef long long ll;

void merge(ll a[], int l, int mid, int r){
	// so phan tu cua nua dau tien va nua thu hai
	int n1 = mid - l + 1, n2 = r - mid;
	ll L[n1], R[n2];
	for(int i = 0; i < n1; i++) L[i] = a[l + i];
	for(int i = 0; i < n2; i++) R[i] = a[mid + 1 + i];
	int i = 0, j = 0, k = l;
	while(i < n1 && j < n2){
		if(L[i] <= R[j]){
			a[k] = L[i];
			i++;
		}
		else {
			a[k] = R[j];
			j++;
		}
		k++;
	}
	while(i < n1){
		a[k] = L[i];
		i++; k++;
	}
	while(j < n2){
		a[k] = R[j];
		j++; k++;
	}
}

void mergesort(ll a[], int l, int r){
	if(l < r){
		int mid = l + (r - l) / 2;
		mergesort(a, l, mid);
		mergesort(a, mid + 1, r);
		merge(a, l, mid, r);
	}
}

int main(){
	int test;
	std::cin >> test;
	while(test--){
		int n;
		std::cin >> n;
		ll a[n];
		for(int i = 0; i < n; i++){
			std::cin >> a[i];
		}
		mergesort(a, 0, n - 1);
		for(int i = 0; i < n; i++){
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}