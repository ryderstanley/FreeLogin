#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    FILE * fpointer = fopen("database.txt", "w");

    fclose(fpointer);

return 0;

}
