![](https://camo.githubusercontent.com/2dec91e6bf9bc9cb3957f84ed9fe8e9a00dd6139eeeb04d3e2dae81977572059/68747470733a2f2f692e6962622e636f2f6e4d74525851522f486f6c626572746f6e2e706e67)
# simple_shell
![](https://pbs.twimg.com/media/FPRgViBXEAkkHpI?format=jpg&name=large)
### Description

This is a simple UNIX shell that replicates the functionality of the simple shell (sh). Additional features are also included. This program was written entirely in C by Yasmin Giraldo and Oscar Castro for the Holberton School.

 Any text seperated by a single space is considered to be an argument. The respective command typed by the user is then executed as if in a UNIX shell.
 
### Files Description

| File  |  Description |
| ------------ | ------------ |
| AUTHORS  |   |
| args.c  |   |
|  enterl.c |   |
| exit_shell.c  |   |
| free_array.c  |   |
|  env.c |   |
| handle_sigint.c |   |
|  libs.c |   |
| man_1_simple_shell  |   |
| newprocess.c  |   |
| path.c  |   |
| shell.h |   |
| s_sh.c  |   |
| argv.c   |   |


## Steps to use the Shell

### 1. Clone the repository

`$ git clone https://github.com/Yasgc24/simple_shell.git`

### 2. Change directory to simple_shell

`$ cd simple_shell/`

### 3. Compile all the .c files in /simple_shell

`gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`

## Usage

**Use in interactive mode:**
 >$ ./hsh 
    ($) /bin/ls hsh main.c shell.c 
    ($) 
    ($) exit $

**Use in non-interactive mode:**

>$ echo "/bin/ls" | ./hsh hsh main.c shell.c test_ls_2 
$ 
$ cat test_ls_2 /bin/ls /bin/ls 
$ 
$ cat test_ls_2 | ./hsh hsh main.c shell.c test_ls_2 hsh main.c shell.c test_ls_2 
$

## Man page

**For further information please refer to the man page - accessed in terminal with:**

`man -l man_1_simple_shell`

## Example of Use

In the following example we enter the simple shell with the compilation code, then we compile with `./hsh` and see what I enter `"Cisfun$"`, then we list the files `"ls"` and see the path `"pwd"` , then we `exit` and return to our default shell


![ejemplo](https://user-images.githubusercontent.com/98331961/165084046-8e46bd4e-f437-479e-af2a-b3378297922a.png)


## Bugs

Perhaps several, however it is a project carried out in the learning process of software development, do not hesitate to contact the authors if you have any questions, thank you very much

## Authors:
- [Yasmin Giraldo](https://github.com/Yasgc24) - [@Yasgc24](https://twitter.com/Yasgc24) -  :tw-1f4e9: 4537@holbertonschool.com
- [Oscar Castro](https://github.com/GhostyO17) -  [@Ghosty_l](https://twitter.com/Ghosty_l) - :tw-1f4e9:  4531@holbertonschool.com
