#include <stdio.h>

int main(){
    FILE *save;
    save = fopen("data/save.txt", "r");
    char line[128];
    int testt =0 ;
    char boolStr[6]; // "true" or "false"
    while (fgets(line, sizeof(line), save)) {
        sscanf(line, "%d", &testt);
    }
    printf("%d", testt);
    fclose(save);
}
