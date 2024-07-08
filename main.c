// #include <stdbool.h>

// a perfect number is an postive number that is equal to the sum of its postive divisors.
// an example is 6 because its postive divisors are 1, 2, and 3 and their sum is 6, thus 6 is a perferc number.
// create a program to tell perfcet numbers between 1 and 100

#include <stdio.h>
int is_perfect(const int number)
{
   int sum_of_divisors=0;


    for(int i=1;i<number;i++)
    {
        if(number%i ==0)
        {
            sum_of_divisors+=i;
        }
        //add the number of the divisor to sum of divisors
    }


    if(sum_of_divisors==number)
    {
        return number;
    }
   return 0;
}

int main(void)
{
    //the function above checks if any given number is perfect and returns
    // modify the function to return all perfect numbers and ignore the rest

    const int number =1000;
    for(int n=1;n<=number;n++)
    {
        if(is_perfect(n)!=0)
        {
            printf("%d,",n);
        }
    }
    return 0;
}
