#include "rna_transcription.h"
#include <stdio.h>

int main()
{
    char dna[] = "GCTA";

    printf("%s", to_rna(dna));
    printf("\n");
}


