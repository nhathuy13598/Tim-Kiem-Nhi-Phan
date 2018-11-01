#include <stdio.h>
int a[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
int timkiemnhiphan(int a[],int x) {
	int left = 0, right = 14;
	int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (a[mid] == x)
			return mid;
		else {
			if (a[mid] > x)
				right = mid+1;
			else
				left = mid-1;
		}
	}
	return -1;
}
void main() {
	int kq = timkiemnhiphan(a, 5);
	printf("%d\n", kq);
}