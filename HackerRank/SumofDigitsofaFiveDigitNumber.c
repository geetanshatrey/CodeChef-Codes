// Link to the problem : https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int c = 0;
    //Complete the code to calculate the sum of the five digits on n.
    while(n > 0) {
        c += n % 10; 
        n = n/10;
    }
    printf("%d", c);
    return 0;
}
