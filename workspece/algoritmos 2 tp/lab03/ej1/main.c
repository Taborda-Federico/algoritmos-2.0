#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 1000

static void dump(char a[], unsigned int length)
{
    printf("\"");
    for (unsigned int j = 0u; j < length; j++)
    {
        printf("%c", a[j]);
    }
    printf("\"");
    printf("\n\n");
}

char *parse_filepath(int argc, char *argv[])
{
    /* Parse the filepath given by command line argument. */
    char *result = NULL;
    // Program takes exactly two arguments
    // (the program's name itself and the input-filepath)
    bool valid_args_count = (argc == 2);

    if (!valid_args_count)
    {

        exit(EXIT_FAILURE);
    }

    result = argv[1];

    return result;
}

unsigned int data_from_file(const char *path, unsigned int indexes[], char letters[], unsigned int max_size)
{

    FILE *file = fopen(path, "r");

    unsigned int contador = 0;
    while (contador < max_size && fscanf(file, "%u -> *%c*%*c\n", &indexes[contador], &letters[contador]) == 2)
    {
        contador++;
    }

    fclose(file);
    if (contador < max_size)
    {
        printf("error");
    }

    return contador;
}

void arra_sorted(unsigned int indexes[], char letters[], char sorted[], unsigned int length)
{
    for (unsigned int i = 0u; i < length; i++)
    {
        int pos = indexes[i];
        sorted[pos] = letters[i];
    }
}
// main
int main(int argc, char *argv[])
{
    char *filepath = NULL;
    filepath = parse_filepath(argc, argv);

    unsigned int indexes[MAX_SIZE];
    char letters[MAX_SIZE];
    char sorted[MAX_SIZE];

    unsigned int length = 0;

    length = data_from_file(filepath, indexes, letters, MAX_SIZE);

    arra_sorted(indexes, letters, sorted, MAX_SIZE);

    dump(sorted, length);

    return EXIT_SUCCESS;
}
