![Holberton logo](https://blog.holbertonschool.com/wp-content/uploads/2019/04/instagram_feed180.jpg)
# Simple Shell Project

This repository contains the files for the Simple Shell Project of Holberton School. The objective of this project is to make a basic command intarpreter, a.k.a Shell.

# Synopsis

The Simple Shell is a program that will read commands that are given by the user through Standard Input. 

The Simple Shell has two modes in which it can operate
**Interactive Mode** and **Non-Interactive Mode**

In the **Interactive Mode**, the Simple Shell will show the "$" character, which is called prompt, this prompt will indicate to the user that it can write andexecute a command 
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
```
In the **Non-Interactive Mode**, it is requiered that the command that the user types, is piped with the command of the execution of the Simple Shell. This will initialize the Simple Shell as soon as the command is executed.
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
```
Keep in mind, that in this Non-interactive Mode, the prompt will not appear after executing the command.

# Requirements

### List of Allowed Functions and System Calls
- access (man 2 access)
- chdir (man 2 chdir)
- close (man 2 close)
- closedir (man 3 closedir)
- execve (man 2 execve)
- exit (man 3 exit)
- _exit (man 2 _exit)
- fflush (man 3 fflush)
- fork (man 2 fork)
- free (man 3 free)
- getcwd (man 3 getcwd)
- getline (man 3 getline)
- isatty (man 3 isatty)
- kill (man 2 kill)
- malloc (man 3 malloc)
- open (man 2 open)
- opendir (man 3 opendir)
- perror (man 3 perror)
- read (man 2 read)
- readdir (man 3 readdir)
- signal (man 2 signal)
- stat (__xstat) (man 2 stat)
- lstat (__lxstat) (man 2 lstat)
- fstat (__fxstat) (man 2 fstat)
- strtok (man 3 strtok)
- wait (man 2 wait)
- waitpid (man 2 waitpid)
- wait3 (man 2 wait3)
- wait4 (man 2 wait4)
- write (man 2 write)

# Instructions to Run the Code
1. Clone this repository
2. Compile the files with this command:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
3. To execute the Simple Shell in Interactive Mode, type this command in the terminal:
```
./hsh
```
4. To execute the Simple Shell in the Non-Interactive Mode, type this command in the terminal:
```
echo "/bin/ls" | ./hsh
```

# Files Contained in the Repository

* [**holberton.h**](./holberton.h): Contains the prototypes that we will use. 

# Authors & Contact Information
- Juan Daniel Lopez Garcia - GitHub: https://github.com/danielj32/
- Juan Villegas - GitHub: https://github.com/juanjo7890/