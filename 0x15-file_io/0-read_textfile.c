#include "main.h"
#include <stdlib.h>

/**
 * read_file_and_print - Reads a file and prints its contents to stdout
 * @file_path: The path of the file to read
 * @num_bytes: The number of bytes to read from the file 
 * Return: The actual number of bytes read and printed to stdout, or 0 if the function fails.
 */

ssize_t read_file_and_print(const char *file_path, size_t num_bytes)
{
    char *buffer;
    ssize_t file_descriptor;
    ssize_t num_bytes_read;
    ssize_t num_bytes_written;

    file_descriptor = open(file_path, O_RDONLY);
    if (file_descriptor == -1)
        return (0);

    buffer = malloc(sizeof(char) * num_bytes);
    num_bytes_read = read(file_descriptor, buffer, num_bytes);
    num_bytes_written = write(STDOUT_FILENO, buffer, num_bytes_read);

    free(buffer);
    close(file_descriptor);

    return (num_bytes_written);
}
