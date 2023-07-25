# Collaboration Project: ALX Software Engineering 
## The Re-Birth of the printf function in the C Programming Language

### Collaborators:
- `Favour Chibuike: @callmeKORRA03`
- `Stephen Omoregie: @Cr8steveDesign`



## Description 
The `printf` project is the first Group project undertaken by students of the Alx Software Engineering Program. It purpose as it has shown from our experience implementing the requirements for the task, is to solidify the knowledge of the C programming language by us students in the program. 

The printf function is one of the functions in the stdio.h header file. It is a very versatile tool and the most used function for printing to the STDOUT (Console/Terminal) in C. 

The goal of this project, was to teach us as Alx Students (Cohort 16) various skills including, but not limited to the inner Workings of various concepts of the C programming language, GitHub Collaboration, Project Planning, Problem Solving and Research. 

 ## Details of the Project Tasks We Handled

 ### Task 0
 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

- Write a function that produces output according to a format. 

- Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
    - %c   %s    %%

<ul>
<li> You don’t have to reproduce the buffer handling of the C library printf function
<li> You don’t have to handle the flag characters
<li> You don’t have to handle field width
<li> You don’t have to handle precision
<li> You don’t have to handle the length modifiers
</ul>

### Task 1
1. Education is when you read the fine print. Experience is what you get if you don't
mandatory
Handle the following conversion specifiers:
    - %d    %i
<ul>
<li> You don’t have to handle the flag characters
<li> You don’t have to handle field width
<li> You don’t have to handle precision
<li> You don’t have to handle the length modifiers
</ul>


## Details of Code Implementation 
At the heart of the printf is a call to the write(fd, char *, bytes) function. We used this function to implement a series of sub-functions that worked independently to handle the larger functionality of the _printf function. 

