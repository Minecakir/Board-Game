![image](https://user-images.githubusercontent.com/67970973/123793486-6b5aed00-d8ea-11eb-817e-c130d24bdb2d.png)

- This is my first year spring lab assignment in computer engineering.
A children’s board game consists of a square array of dots that contains lines connecting some of the pairs of adjacent dots. One part of the game requires that the players count the number of squares of certain sizes that are formed by these lines. For example, in the figure shown below, there are 3 squares — 2 of size 1 and 1 of size 2. (The “size” of a square is the number of lines segments required to form a side.)

![image](https://user-images.githubusercontent.com/67970973/123793265-2fc02300-d8ea-11eb-8378-fd30b6f65fca.png)

**Your problem is to write a program that automates the process of counting all the possible squares.**

![image](https://user-images.githubusercontent.com/67970973/123793559-82014400-d8ea-11eb-8581-e923d4c1009f.png)

The input file represents a series of game boards. Each board consists of a description of a square array of n 2 dots (where 2 ≤ n ≤ 9) and some interconnecting horizontal and vertical lines. A record for a single board with n 2 dots and m interconnecting lines is formatted as follows:
- Line 1: n the number of dots in a single row or column of the array 
- Line 2: m the number of interconnecting lines

Each of the next m lines are of one of two types:

> **H i j**  indicates a horizontal line in row i which connects the dot in column 
> j to the one to its right in column **j + 1**

or

> **V i j** indicates a vertical line in column i which connects the dot in row j to the one below in row **j + 1**

Information for each line begins in column 1. The end of input is indicated by end-of-file. The first record of the sample input below represents the board of the square above.

![image](https://user-images.githubusercontent.com/67970973/123793974-0358d680-d8eb-11eb-89bc-b0c431a22ffe.png)

For each record, label the corresponding output with ‘Problem #1’, ‘Problem #2’, and so forth. Output for a record consists of the number of squares of each size on the board, from the smallest to the largest. lf no squares of any size exist, your program should print an appropriate message indicating so. Separate output for successive input records by a line of asterisks between two blank lines, like in the sample below.

![image](https://user-images.githubusercontent.com/67970973/123794089-23889580-d8eb-11eb-80f4-eca92217b2b7.png)
![image](https://user-images.githubusercontent.com/67970973/123794159-37cc9280-d8eb-11eb-995e-6410791868b9.png)

👨‍💻Click the link below for the txt file

[input.txt](https://github.com/Minecakir/Board-Game/blob/master/input.txt)

👨‍💻Click the link below for solution

[Solution code](https://github.com/Minecakir/Board-Game/blob/master/Children-Board-Game.cpp)

