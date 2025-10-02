#include <stdio.h>

int main() {
	char a[100];
	scanf("%s", a);
	int t = 1;
	char current = a[0];
	int count = 1;
	while(a[t] != '\0') {
		if(a[t] == current){
			count++;
		}
		else{
			printf("%c%d", current, count);
			current = a[t];
			count = 1;
		}
		t++;
	}
	printf("%c%d\n", current, count);
	return 0;
}
