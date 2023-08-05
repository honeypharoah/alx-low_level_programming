#ifndef MAIN_H
#define MAIN_H

/* Checks for uppercase character */
int _isupper(int c);

/* Checks for a digit 0 through 9 */
int _isdigit(int c);

/* Multiples two integers */
int mul(int a, int b);

/* Prints the numbers, from 0 to 9 */
void print_numbers(void);

/* Prints the numbers, from 0 to 9, except 2 and 4 */
void print_most_numbers(void);

/* Prints 10 times the numbers, from 0 to 14 */
void more_numbers(void);

/* Draw a straight line in the terminal */
void print_line(int n);

/* Draws a diagonal line on the terminal */
void print_diagonal(int n);

/* Prints a sqaure */
void print_square(int size);

/* Print a triangle */
void print_triangle(int size);

/* prints an integer */
void print_number(int n);

#endif /* MAIN_H */
