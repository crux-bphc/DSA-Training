# Knapsack

You are given a set of items, each of which has an associated weight and value. You are also given a **capacity constraint** (i.e the maximum sum of item weights that you can carry with you). You are supposed to **find the maximum sum of values of items you can obtain whose sum of weights does not exceed the capacity constraint**.

#### Approach to the problem
Notice that at each instant you can do either of the two operations:
* Choose the object
* Do not choose the object

This observation gives a simple recursive solution. Our recursive function will return the maximum value obtained.
~~~
n is the length of the array
we start with the target capacity and move backwards, checking each time if it is possible to get to the current state from the lower state.
we use 1 based indexing
base case: (i==0 or capacity==0) return 0;
recursive case: if(weight[i]<=capacity) 
                return(max(recur(capacity,i-1),recur(capacity-weight[i],i-1)+value[i]));
                else
                return(recur(capacity,i-1));
~~~

The first return statement in recursive case ensures that the capacity is not exceeded. If so, choose the best out of picking the current object or not picking the current object.
The second return statement is if the current object cannot be added.

Notice that this solution takes exponential time due to several repeated calls. This can be brought down to polynomial time by memoizing the states. The memoisation would look something like this:

Consider a 2D array called `dp`. `dp[i][j]` represents the answer considering first `i` items and a total weight of `j`. Initialise this array to `-1` (will help us to detect if a state has been solved). If the state has been solved before, simply return it.
Another point, do not forget to update the states. The memoised solution takes O(n<sup>2</sup>) time which is sufficient.

Now that we know both the recursive and memoised solution, we can easily convert it to an iterative solution. The state transition is the same as described above.

#### Resources
* [GFG](https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/)
* [Video [V]](https://www.youtube.com/watch?v=xCbYmUPvc2Q)
* [CPH Ch 7, pg 72, Knapsack [B]](https://cses.fi/book/book.pdf#page=82)
* [HackerEarth](https://www.hackerearth.com/practice/notes/the-knapsack-problem/)

#### Problems
* [Atcoder DP D](https://atcoder.jp/contests/dp/tasks/dp_d)
* [Atcoder DP E](https://atcoder.jp/contests/dp/tasks/dp_e)

##### Challenging
* [Codeforces 106C](https://codeforces.com/problemset/problem/106/C)
* [Codeforces 730J](https://codeforces.com/problemset/problem/730/J)
