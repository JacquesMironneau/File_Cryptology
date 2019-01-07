#include <stdio.h>
#include <stdlib.h>

int main(void){
    unsigned char src = 71;
    unsigned char key = 89;
    unsigned char dst = src+key;

    if (dst>90){
        dst = (dst-90);
    }
    printf("%c\n",dst); 

    return EXIT_SUCCESS;
}