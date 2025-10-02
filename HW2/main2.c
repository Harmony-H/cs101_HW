#include <stdio.h>

int main() {
	char a[100];
	scanf("%s", a);
	int t = 0;
	while(a[t] != '\0') {
		for(int i=0 ;i<a[t+1]-'0';i++) {
			printf("%c",a[t]);
		}
		t+=2;
	}
	printf("\n");
	return 0;
}
