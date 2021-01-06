// Complete the following program outline:
#include <stdio.h>

int Divisor( int nNum ) {
    int nDiv = 1;
    while (nNum > 9)
    {   nNum /= 10;
        nDiv *= 10;
    }
    return nDiv;
 }

void RemoveLeftDigit (int *nNum )
{ /* write your code that will update the value of nNum to one that with
 the leftmost digit removed. Use the function Divisor.
 Examples: *nNum = 435237, *nNum should be 35237
 *nNum = 7841, *nNum should be 841
 *nNum = 9, *nNum should be 0
 */
}

int main () {
/* Write your code that would get a number from the user and then, display all numbers
from 1 to the leftmost digit of that number. Also display the number without the
leftmost digit. You are required to use the functions that are defined in this problem
(and you are free to introduce additional functions as needed).
Example 1: Enter number: 435237
 Output: 1 2 3 4
 Number: 35237
Example 2: Enter number: 7841
 Output: 1 2 3 4 5 6 7
 Number: 841
Example 3: Enter number: 9
 Output: 1 2 3 4 5 6 7 8 9
 Number: 0
*/
    return 0;
}