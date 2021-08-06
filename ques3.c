/* Tower of hanoi
 *
 * @Prerna(1910990964)
 *
 * Assignment-5_Recursion
 *
 */

#include<stdio.h>

int steps = 0;
void tower_of_hanoi(int n, char from, char to, char aux) {
    if(n > 0) {
        tower_of_hanoi(n - 1, from, aux, to);
        printf("%c to %c\n" ,from, to);
        steps++;
        tower_of_hanoi(n - 1, to, from, aux);
    }

}

int main() {
    tower_of_hanoi(3,'A','C','B');
    printf("Number of steps are : %d",steps);
}
