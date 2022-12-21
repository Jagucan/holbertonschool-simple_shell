# Simple Shell

## What Is a Simple Shell?
The Shell is an interface to Unix systems, that runs programs based on these systems. and the simple shell is the simple implementation of a shell for Unix operating systems.

## Compilation

This shell will compile like this:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`

## Testing
if you want to work in interactive mode:

`./hsh`

or if you also want to use interactive mode:

`echo "/bin/ls" | ./hsh`

### Example


* interactive mode:
```
    $ ./hsh
    $ - /bin/ls
    hsh main.c shell.c
    $ -
    $ - exit
    $
```
* non-interactive mode:
```
    $ echo "/bin/ls" | ./hsh
    hsh main.c shell.c test_ls_2
    $
```

## Diagram Of Simple Shell
[Simple Shell](https://drive.google.com/file/d/1W0p3YlRTGabkVP2YN5iR6I9CdUYdbSTR/view?usp=share_link)
