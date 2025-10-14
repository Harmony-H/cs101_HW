#include <stdio.h>
#include <stdlib.h>

int main() {

	int n;
	scanf("%d", &n);
	srand(1);

	FILE *fp;
	fp = fopen("lotto.txt", "wt+");

	fprintf(fp, "========= lotto649 =========\n");

	for(int i = 1; i <= n; i++) {
	    int used[72]={0};
		fprintf(fp, "[%d]:", i);
		for(int j = 0; j < 7;) {
			int temp = rand()%69+1;
			if(used[temp]==0) {
				used[temp]=1;
				fprintf(fp, " %02d",temp);
				j++;
			}
		}
		fprintf(fp,"\n");
	}

	for(int i = n + 1; i <= 5; i++) {
		fprintf(fp, "[%d]: __ __ __ __ __ __ __\n", i);
	}

	fprintf(fp, "========= csie@CGU =========\n");

	fclose(fp);

	return 0;
}
