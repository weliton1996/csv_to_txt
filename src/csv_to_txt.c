#include <stdio.h>
#include "csv_to_txt.h"

void csv_to_txt(const char *input_filename, const char *output_filename) {
    FILE *input_file = fopen(input_filename, "r");
    FILE *output_file = fopen(output_filename, "w");

    if (input_file == NULL || output_file == NULL) {
        perror("Error opening file");
        return;
    }

    int ch;
    while ((ch = fgetc(input_file)) != EOF) {
        if (ch == ',') {
            fputc(' ', output_file);   // Escreve um espaço antes da barra vertical
            fputc('|', output_file);   // Escreve a barra vertical
            fputc(' ', output_file);   // Escreve um espaço após a barra vertical
        } else {
            fputc(ch, output_file);   // Escreve o caractere original no arquivo de saída
        }
    }

    fclose(input_file);
    fclose(output_file);
}
