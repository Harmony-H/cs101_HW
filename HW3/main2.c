#include <stdio.h>
#include <string.h>

int main() {

	FILE *fp;
	fp = fopen("main.c", "r");
	char rd[1000];
	int n = 1;

	while(fgets(rd, sizeof(rd), fp) != NULL) {
		if (strstr(rd, "int main(") != NULL) {
			break;
		}
		n++;
	}
	fclose(fp);
	
	fp = fopen("main.txt", "w");
	fprintf(fp,"%d\n", n);
	fclose(fp);

	return 0;
}
