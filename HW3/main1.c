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
        fprintf(fp, "[%d]:", i);
        int lotto[7];
        for(int j = 0; j < 7; j++) {
            int temp = rand()%69+1;
            for(int k = 0; k < j; k++){
                if(lotto[k] == temp){
                    temp = rand()%69+1;
                    k = 0;
                }
            }
            lotto[j] = temp;
        }
        for(int j = 0; j < 7; j++) {
            fprintf(fp, " %02d", lotto[j]);
        }
        fprintf(fp, "\n");
    }
    
    for(int i = n + 1; i <= 5; i++){
        fprintf(fp, "[%d]:", i);
        for(int j = 0; j < 7; j++) {
            fprintf(fp, " __");
        }
        fprintf(fp, "\n");
    }
    
    fprintf(fp, "========= csie@CGU =========\n");
    
    fclose(fp);
    
    return 0;
}
