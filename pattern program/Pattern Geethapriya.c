#include <stdio.h>
int main()
{
    int i, j, row = 5, col = 5;
    for(i = 1; i <= row; i++){
        for(j = 1; j <= col; j++) {
            if(i == 1 || i == 5 || j == 1 || (j == 5 && i >= 3) || (i == 3 && j >= 3))
                printf("*");
            else
                printf(" ");
        }printf("  ");
        for(j = 1; j <= col; j++){
            if(j == 1 || i == 1 || i == 3 || i == 5)
                printf("*");
            else
                printf(" ");
        } printf("  ");
        for(j = 1; j <= col; j++){
            if(j == 1 || i == 1 || i == 3 || i == 5)
                printf("*");
            else
                printf(" ");
        }printf("  ");
        for(j = 1; j <= col; j++){
            if(i == 1 || j == 3)
                printf("*");
            else
                printf(" ");
        }printf("  ");
        for(j = 1; j <= col; j++){
            if(j == 1 || j == 5 || i == 3)
                printf("*");
            else
                printf(" ");
        } printf("  ");
        for(j = 1; j <= col; j++){
            if(i == 1 || i == 3 || j == 1 || j == 5)
                printf("*");
            else
                printf(" ");
        }printf("  ");
        for(j = 1; j <= col; j++){
            if(j == 1 || i == 1 || i == 3 || (j == 5 && i < 3))
                printf("*");
            else
                printf(" ");
        }printf("  ");
        for(j = 1; j <= col; j++){
            if(j == 1 || i == 1 || i == 3 ||
               (j == 5 && i < 3) || (i == 4 && j == 4) ||
               (i == 5 && j == 5))
                printf("*");
            else
                printf(" ");
        }printf("  ");
        for(j = 1; j <= col; j++){
            if(i == 1 || i == 5 || j == 3)
                printf("*");
            else
                printf(" ");
        }printf("  ");
        for(j = 1; j <= col; j++) {
            if((i == 1 && (j == 1 || j == 5)) ||
               (i == 2 && (j == 2 || j == 4)) ||
               (i == 3 && j == 3) ||
               (i >= 4 && j == 3))
                printf("*");
            else
                printf(" ");
        }printf(" ");
        for(j = 1; j <= col; j++){
            if(i == 1 || i == 3 || j == 1 || j == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
