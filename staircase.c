#include <stdio.h>

#define p1 "  # "
#define p2 " ## "
#define p3 "### "

int main(){

    int n;
    printf("Enter number of staircases: ");
    scanf("%d", &n);
    if(n < 0 || n > 100){
        printf("n=%d, must be in [0,100]", n);
        return 1;
    }
    while(n){
        if(n >= 5){
            for(int i = 0; i < 4; i++){
                printf(p1);
            }
            printf("  #\n");
            for(int i = 0; i < 4; i++){
                printf(p2);
            }
            printf(" ##\n");
            for(int i = 0; i < 4; i++){
                printf(p3);
            }
            printf("###\n");
            n -= 5;
        }
        else if(n < 5){
            for(int i = 0; i < n - 1; i++){
                printf(p1);
            }
            printf("  #\n");
            for(int i = 0; i < n - 1; i++){
                printf(p2);
            }
            printf(" ##\n");
            for(int i = 0; i < n - 1; i++){
                printf(p3);
            }
            printf("###\n");
            break;
        }
    }
    return 0;
}