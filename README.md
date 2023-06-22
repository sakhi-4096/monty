# Monty 0.98 Language Interpreter
The Monty project is an interpreter for the Monty language, designed to execute Monty byte code files.
![Make Tea Not Love](https://pbs.twimg.com/media/CFYYWy6UEAE9Ow-.png)

## Description
Monty is a high-level programming language that follows a stack-based paradigm, allowing users to perform various stack operations and manipulate data efficiently. It aims to provide a robust and efficient interpreter for the Monty language, allowing developers and users to write Monty programs and execute them with ease.

## Features
 * Interpretation of Monty byte code files
 * Implementation of stack operations (*push, pop, swap, add*)
 * Print stack values (*pint, pall*)
 * Error handling for invalid instructions, empty stack, and memory allocation failures
 * Modularity and extensibiility for easy addition of new opcodes
 * Efficient utilization of stacks and queues for stack management

## Installation
```shell
sakhi@ubuntu:~/monty git clone https://github.com/sakhi-4096/monty
sakhi@ubuntu:~/monty cd monty
sakhi@ubuntu:~/monty gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
sakhi@ubuntu:~/monty ./monty bytecodes/000.m
```

## Usage
 * ./monty [filename]
 ```shell
 sakhi@ubuntu:~/monty ./monty bytecodes/000.m
```

## Credits
 * [stderred](https://github.com/sickill/stderred)
 * [How To Implement a Stack in C Programming](https://www.digitalocean.com/community/tutorials/stack-in-c)
 * [Creating a Queue in C](https://www.digitalocean.com/community/tutorials/queue-in-c)
 * [How To Implement Circular Queue in C?](https://www.edureka.co/blog/circular-queue-in-c/)
 * [Stacks and Queues in C](https://data-flair.training/blogs/stacks-and-queues-in-c/)
 * [Share variables between source file](https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files)
 * [Stacks on Stacks: A LIFO Love Story "PART 1"](https://shazaali.substack.com/p/stacks-on-stacks-a-lifo-love-story)
 * [Monty: Stacks on Stacks: A LIFO & FIFO Love Story "PART 2"](https://shazaali.substack.com/p/monty-stacks-on-stacks-a-lifo-and?utm_source=share&utm_medium=android)

## Contact
 * [Sakhile Ndlazi](https://www.twitter.com/sakhilelindah)
