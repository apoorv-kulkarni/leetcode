/*Given an integer, write a function to determine if it is a power of three.

Example 1:

Input: 27
Output: true

Example 2:

Input: 0
Output: false

Example 3:

Input: 9
Output: true

Example 4:

Input: 45
Output: false

Follow up:
Could you do it without using any loop / recursion?
*/

#include <iostream>
using namespace std;
//original was 3 but I modified it to check for power of any number
bool isItPowerOfN(int evalateThis, int numbr){
    /*  various conditions to consider, we keep dividing evalateThis by numbr; 
        make sure modulus is equal to 0 
        if it has reached 1 factorial; make sure the value is number is 1; this will be an or condition; stop here
        make sure after dividing it by 3 it is always greater than 0
        keep doing it until you reach all these conditions or they fail
    */
    return numbr> 0 && (numbr==1 || (evalateThis%numbr==0 && isItPowerOfN(evalateThis/numbr,numbr))); 
}