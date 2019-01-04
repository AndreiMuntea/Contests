// https://codeforces.com/contest/384/problem/A
// https://codeforces.com/contest/384/submission/16465578

#include <stdio.h>
#include <stdlib.h>

void printC(int);
void printP(int);

int main(){
	int n,i,j,count;
	scanf("%d",&n);
	count = ((n/2)+(n%2))*((n/2)+(n%2))+(n/2)*(n/2);
    printf("%d\n",count);
	for (i = 0; i < n; i++){
		if (i & 1) printC(n);
		else printP(n);
	}
	return EXIT_SUCCESS;
}

void printC(int lg){
	int i;
	for (i = 0; i < lg; i++){
		if (i & 1) putchar('C');
		else putchar('.');
	}
	putchar('\n');
}

void printP(int lg){
	int i;
	for (i = 0; i < lg; i++){
		if (i & 1) putchar('.');
		else putchar('C');
	}
	putchar('\n');
}
