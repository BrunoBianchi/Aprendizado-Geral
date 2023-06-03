#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *img;
    img = fopen("campo.png","r");
    int buffer;
    while((buffer =fgetc(img))!= EOF) {
        printf("%d \t",buffer);
    }
    fclose(img);a
    return 0;
}
