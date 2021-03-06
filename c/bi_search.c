#include <stdio.h>
	
#define LENGTH 10
	
int bi_search(int a[], int target, int n) {
	int start = 0;
	int end = n;
	int mid = end / 2;
	if (a[mid] == target) {
		return mid + 1;
	}
	while (start < end) {
		if (a[mid] < target) {
			start = mid + 1;
		} else {
			end = mid - 1;
		}
		mid = start + (end - start) / 2;
		if (mid < a.length && a[mid] == target) return mid + 1;
	}
	return -1;
}
	
int main(){
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	int result = bi_search(a, 3, LENGTH);
	printf("%d", result);
	return 0;
}
