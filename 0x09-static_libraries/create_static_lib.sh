#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create a static library from the object files
ar rcs liball.a *.o

# Clean up object files
rm *.o

# Print success message
echo "Static library liball.a created successfully."

