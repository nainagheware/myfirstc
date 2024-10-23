#!/bin/bash

# Compile the C program
gcc -o hello hello.c
gcc -o sum sum.c
gcc -o SI SI.c
gcc -o discount discount.c
gcc -o kalakumbhchoice kalakumbhchoice.c
gcc -o 3nos 3nos.c
gcc -o 3sidesoftri 3sidesoftri.c

# Check if the compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful!"
    
    # Run the compiled program
    # ./hello
    # ./sum
    # ./SI
    # ./discount
    #./kalakumbhchoice 
    # ./3nos
    ./3sidesoftri
else
    echo "Compilation failed."
fi

# Clean up the compiled executable
rm hello

git add .
git commit -m "update" .
git push origin main