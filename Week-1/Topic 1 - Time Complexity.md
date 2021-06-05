# Complexity and Big-O notation
Time and space complexity analysis is an important part of solving a problem given constraints. Time complexity, in a crude sense, is the number of steps/operations your algorithm takes to finish executing a given input. Similarly, space complexity is the amount of space your algorithm might occupy when it runs a given input. Generally, complexity is measured as a function of the size of the input.

## Resources
* [Tutorial - Time [B]](https://www.hackerearth.com/practice/basic-programming/complexity-analysis/time-and-space-complexity/tutorial/)
* [Tutorial - Space [B]](https://leetcode.com/explore/learn/card/recursion-i/256/complexity-analysis/1671/) (skim through, do not read too deep into it)
* [Tutorial [V]](https://www.youtube.com/watch?v=V42FBiohc6c&list=PL2_aWCzGMAwI9HK8YPVBjElbLbI3ufctn&fbclid=IwAR0kaAXKECS6iAP2kGUYf__X2j6_SS-c4yeq0dzjJvgBAyS8U-L4LBBwsPM)
* [Time complexity in recursion [V]](https://www.youtube.com/watch?v=ncpTxqK35PI&fbclid=IwAR2a_OraRdPheSV0tDNcp5p10jswXgAHpYeowuZIMUjmB0ad0DBDnABdxxE)

## Practice
* [GFG](https://www.geeksforgeeks.org/practice-questions-time-complexity-analysis/)
* [Codechef](https://discuss.codechef.com/t/multiple-choice-questions-related-to-testing-knowledge-about-time-and-space-complexity-of-a-program/17976)
* [InterviewBit](https://www.interviewbit.com/courses/programming/topics/time-complexity/#problems)

#### Some things to try/note/remember (some might make sense at a later point)
* Try to find the time complexity and space complexity as you write code. With time and practice you will get better at it.
* Constraints can sometimes give away the expected time complexity of the solution.
    * You can assume approximately 10<sup>8</sup> operations per second to run in time. 
    * You can use approximately 5 * 10<sup>7</sup> ```int```s worth of memory, be it through a single array of that size (say ```arr[10000000]```), or multidimensional arrays (say ```arr[10000][1000]```). Be wary that ```long long``` takes more space than int.
* STL/inbuilt functions have their own time complexity which you will need to factor in while finding complexity.
