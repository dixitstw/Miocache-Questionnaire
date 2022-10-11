//2. Write a program that prints 1 2 3 4 5 6 7 ... up to some +ve integer N the natural number series, but with all numbers that also show up in the Fibonacci series replaced with -1
#include <stdio.h>
 
int main()
{
   int i, n, a=0, b=1, c;
 
   printf("Enter a positive integer number: ");
   scanf("%d", &n);
 
   printf("Natural numbers from 1 to %d replacing numbers showing up in the Fibonacci series with -1 : \n", n);
 
   /*
    * Start loop counter from 1 (i=1) and go till n (i<=n)
    * increment the loop count by 1 to get the next value.
    * For each repetition print the value of i.
    */
   for(i=1; i<=n; i++) {
    c = a + b;
    
    if (i==c) {
        printf("-1\n");
        a = b;
        b = c;
    }
    else {
        printf("%d\n", i);
    }


     }
}