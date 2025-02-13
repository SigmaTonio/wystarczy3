#include <stdio.h>
#include <math.h>

int main() {
    FILE *fp = fopen("output.dat", "w");
    if (!fp) {
        printf("Błąd otwierania pliku!\n");
        return 1;
    }

    for (double x = 0; x <= 10; x += 0.1) {
        fprintf(fp, "%lf %lf\n", x, sin(x));
    }
    fclose(fp);

    return 0;
}
