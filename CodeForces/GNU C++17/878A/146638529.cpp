#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	scanf("%d", &n);

	int a = 0, b = 1023;
	for(int i = 0; i < n; i++) {
		char c; scanf(" %c", &c);
		int x; scanf("%d", &x);
		if(c == '|') a |= x, b |= x;
		if(c == '^') a ^= x, b ^= x;
		if(c == '&') a &= x, b &= x;
	}

	int on = 0, sw = 0;
	for(int i = 0; i < 10; i++) {
		int x = 1 << i;
		if(~a & x and ~b & x) on |= x, sw |= x;
		if(a & x and b & x) on |= x;
		if(a & x and ~b & x) sw |= x;
	}

	printf("2\n");
	printf("| %d\n", on);
	printf("^ %d\n", sw);

}