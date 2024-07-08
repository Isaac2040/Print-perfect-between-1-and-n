Description
This program finds and prints all perfect numbers between 1 and n. 
A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding itself. 
For example, the number 6 is a perfect number because its positive divisors are 1, 2, and 3, and their sum is 6.

How it Works
The program includes a function is_perfect that checks if a given number is perfect. The function iterates through all numbers less than the given number to find its divisors, sums these divisors, and checks if the sum is equal to the original number.
If it is, the function returns the number, indicating it is perfect; otherwise, it returns 0.
The main function then uses this is_perfect function to check each number from 1 to 100 and prints the perfect numbers it finds.
