#include<stdio.h>
#include<stdlib.h>

int main() {
    
	int i,j,k;
    int a=5;

    for(i=a;i>=1;i--){
        for(j=a;j>i;j--){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    
	system("PAUSE");
    return 0;
}
