//#include <stdio.h>
//int main() {
//	// arr�����ڲ�Ϊ�±꣬count�����Ƿ���3�ı�����nΪ��������tΪÿ���ų�3�ı����������
//	int arr[256], count = 0,n,t;
//	printf("input num:");
//	scanf("%d", &n);
//	t = n;
//	for (int i = 1; i <= n; i++) {
//		arr[i] = i;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (arr[i] != 0) {
//			count++;
//		}
//		if (count == 3) {
//			arr[i] = 0;
//			count = 0;
//			t--;
//		}
//		if (i == n) {
//			i = 0;
//		}
//		if (t == 1) {
//			break;
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		if (arr[i] != 0) {
//			printf("%d", arr[i]);
//		}
//	}
//}
#include<stdio.h>
int gcd(int m,int n) {
	if (n == 0) {
		return m;
	}
	else
		return gcd(n, m % n);
}
int cd(int m,int n) {
	return m * n / gcd(m, n);
}

int main() {
	int m, n;
	scanf("%d,%d",&m,&n);
	printf("%d\n",gcd(m, n));
	printf("%d",cd(m, n));
}
