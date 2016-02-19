#include <stdio.h>

int main() {
    int n, x1,y1,x2,y2;
    scanf("%i %i %i %i %i", &n, &x1, &y1, &x2, &y2);

    printf("\nRESULT\n");
    for(int i=y1;i<=y2;i++){
        for(int j=x1;j<=x2;j++){
            printf("%i ", i*j);
        }
        printf("\n");
    }

    return 0;
}