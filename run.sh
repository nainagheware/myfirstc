#!/bin/bash

# Compile the C program
gcc -o hello hello.c
gcc -o sum sum.c
gcc -o SI SI.c
gcc -o discount discount.c
gcc -o kalakumbhchoice kalakumbhchoice.c

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful!"
    
    # Run the compiled program
    # ./hello
    # ./sum
    # ./SI
    # ./discount
    ./kalakumbhchoice 
else
    echo "Compilation failed."
fi

# Clean up the compiled executable
rm hello

git add .
git commit -m "update" .
git push origin main