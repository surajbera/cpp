- g++ .\05-char-data-type.cpp -o aaa

  - This command generates aaa file which is an executable file(tutor also referred to this file as
    binary file)
  - aaa is an executable binary that can be executed
  - g++ is a GNU C++ compiler

- It's a common practise to name executable binary as run

- g++ -E .\1-playground.cpp

  - This just executes the pre-processing expansion

- g++ -E .\1-playground.cpp > 1-playground-ka-saara-code.cpp

  - This creates a file named 1-playground-ka-saara-code.cpp

- After this pre-processing expansion, there are several steps
- Among those several steps, there is one step in which this code is converted to assembly code
  - Exceute this command: g++ -S .\1-playground.cpp
