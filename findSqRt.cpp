/*Implement int sqrt(int x).

Compute and return the square root of x, where x is guaranteed to be a non-negative integer.

Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.

Example 1:

Input: 4
Output: 2

Example 2:

Input: 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since 
             the decimal part is truncated, 2 is returned.
*/

#include <iostream>
using namespace std;
/* 
find square root of a number using Newton-Raphson Method, 
I felt bamboozled when I was given the hint to this solution
it is so easy to forget what you were taught ages ago
*/
class solution{
public:
    int getSqroot(int number){
        long long rval = number;
        while (rval*rval > number) 
            rval = (rval + number/rval)/2; //NewtonRaphson my dudes!!!
        return rval; // return as int <insert troll face.jpg>
    }
};