/* finding GCD of two numbers using recursion
 *
 * @Prerna(1910990964)
 *
 * Assignment-5_Recursion
 *
 */

#include<stdio.h>

int GCD(int a, int b) {
    if(b != 0) {
    	return GCD(b, a % b);
    }
    return a;
}

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    printf("GCD : %d",GCD(a,b));

}
