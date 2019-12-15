#include <stdio.h>

int main(){
    unsigned int n, m, p;
    printf("Enter number of: staircases, stairs, rows: ");
    scanf("%d %d %d", &n, &m, &p);
    
    int error = 0;

    if(n < 1 || n > 100){
        printf("n=%i, must be in [1,100]\n", n);
        error = 1;
    }
    if(m < 1 || m > 9){
        printf("m=%i, must be in [1,9]\n", m);
        error = 1;
    }
    if(p < 1 || p > 100){
        printf("p=%i, must be in [1,100]\n", p);
        error = 1;
    }

    if(error == 1){
        return 1;
    }

/*
    n = 12; // Number of staircases     
    m = 3; // Number of lines per staircase, staircase symbol
    p = 4; // Number of staircases per row
 */
    while(n){
        if(n >= p){
            // The next for loop creates a staircase block
            for(int a = 1; a < m + 1; a++){

                // The next for loop creates a full row
                for(int b = 0; b < p; b++){
                    for(int i = 0; i < (m - a); i++){     // (m - a)
                        printf(" ");
                    }
                    for(int i = 0; i < a; i++){     // (a + 1)
                        printf("%d", m); //End of each row ALWAYS has a space in it -- should it?
                    }
                    if(b != p - 1){
                        printf(" ");
                    }
                }
                // End of full row
                printf("\n");
            }
            // End of full block
            n -= p;
            //printf("n = %d", n);
        }
        else if(n < p){
            // Next loop creates full block
            for(int a = 1; a < m + 1 ; a++){
                // The next for loop creates a full row
                for(int b = 0; b < n; b++){
                    for(int i = 0; i < (m - a); i++){     // (m - a)
                        printf(" ");
                    }
                    for(int i = 0; i < a; i++){     // (a + 1)
                        printf("%d", m); //End of each row ALWAYS has a space in it -- should it?
                    }
                    if(b != n - 1){
                        printf(" ");
                    }
                }
                // End of full row
                printf("\n");
            }
            break;
            return 0;
        }
    }
    return 0;
}