# get_next_line-unittest

A unit-test written in C for 42 school's [get_next_line](https://github.com/artainmo/get_next_line) project, being a C project with limited access to functions wherein we need to read one line at a time from a file descriptor.

# Use
Place the 'get_next_line_bonus.h' and 'get_next_line_bonus.c' files in the root directory of this project. If there is no bonus, use 'get_next_line.h' and 'get_next_line.c' instead and indicate it at top 'main.c'.

Compile the unittest.
```
gcc main.c
```

Use the unittest with parameters.
```
cat get_next_line_bonus.c | ./a.out 0 //Test with stdin input
./a.out 1 //Test with 'text.txt' file
./a.out 2 //Test with 'text1.txt' file
./a.out 3 //Test with 'textv.txt' file which is an empty file
./a.out 4 //Test with a wrong file descriptor
./a.out 0 0 //Test the bonus part, alternate reading between 'text.txt' and 'text1.txt'
./a.out 0 0 0 //Test if there are leaks
```
