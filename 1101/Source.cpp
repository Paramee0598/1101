#include <stdio.h>
int main() {
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf_s("%d", &rows);
    if (rows >= 0 ){
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%d ", j);
            }
        printf("\n");
        }
    }
    else printf("Error ");
    return 0;
}
