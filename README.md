# sudoku_solver

Creating a sudoku solver (currently not finished)

I'm using backtracking as the main solver algorithm

The board file is an example of what an expected board should look like. If board is not correct, "map error" will be displayed

The zeros in the board file represent the empty squares

To make it work you have to compile the files main, parsing and solver. If you have an OS that allows you to execute makefiles you can run "make" to compile all files needed. "make clean" is to delete all .o files. "make fclean" is to delete all .o files and the "solve" executable. "make re" if make fclean followed by make. (make all is same as make).

I couldn't test the makefile as I am currently on windows, so it might not work. If so, compile the normal way.

Once this is done, execute the file created with one or zero argument. If there is one argument, this will be the name of the new file in which the sudoku to solve is. If there is no argument, the file "board" will be solved by default.

I put a board with three solutions as an example, try it if you want.

Feel free to message me for any questions on the code
