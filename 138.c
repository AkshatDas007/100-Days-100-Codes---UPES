#include <stdio.h>

enum metals{
    METALS,
    NONMETALS,
    METALLOIDS
};

int main(){
    char *metalstype[] = {"METALS", "NONMETALS", "METALLOIDS"};

    for(int i = METALS; i <= METALLOIDS; i++){
        printf("%s : %d\n", metalstype[i], i);
    }
    return 0;
}
