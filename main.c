#include <stdio.h>

int main(int argc, char *argv[])
{
    FILE *outfile;

    outfile = fopen("temp", "w");

    fclose(outfile);

    exit(0);
}
