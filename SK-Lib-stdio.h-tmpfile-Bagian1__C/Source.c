#pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
    Source by CPlusPlus
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    char buffer[256];
    FILE* pFile;
    pFile = tmpfile();

    do {
        if (!fgets(buffer, 256, stdin)) {
            break;
        }

        fputs(buffer, pFile);
    } while (strlen(buffer) > 1);

    rewind(pFile);

    while (!feof(pFile)) {
        if (fgets(buffer, 256, pFile) == NULL) {
            break;
        }

        fputs(buffer, stdout);
    }

    fclose(pFile);

    _getch();
    return 0;
}