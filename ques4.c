/* print n times every third element of fibonacci sequence 
 *
 * @Prerna(1910990964)
 *
 * Assignment-5_Recursion 
 *
 */

#include<stdio.h>

int data[100];

//cause we need to print every third element n times so we require n*3 elements

void fib(int n) {
    n = n * 3 +1;
    data[0] = 0;
    data[1] = 1;
    for(int i = 2; i < n; i++) {
    	data[i] = data[i - 1] + data[i - 2];
    }
}

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 0; i < 100; i++) {
    	data[i] = 0;
    }
    fib(n);
    int p = 3;//value to be printed
    while(n--) {
    	printf("%d, ",data[p]);
	p = p + 3;
    }
}
