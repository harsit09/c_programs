#include <stdio.h>
 
int main() {
    int i, j, rows;
 
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
 
    for(i = 0; i < rows; i++){
        /* for j th row, first print rows-r spaces then stars */
        for(j = 0; j < rows; j++){
            if(j < rows-i-1){
                printf(" ");
            } else {
                printf("*");
            }
        }
        /* move to next row */
        printf("\n");
    }
    return 0;
}
