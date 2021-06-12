# Search Algorithms
Searching is a common problem asked in programming. The most naive way of performing searches would be linear search. Here, we introduce two faster searching algorithms - binary and ternary search.

## Binary Search
Binary Search is used to  search in **sorted** values in logarithmic time. Here, by **sorted** we mean any sequence of elements which is **monotonically** increasing or decreasing. This is the most trivial use of binary search.

The real power of binary search is seen when one needs to search the answer to a problem. This is called **discrete binary search**. The general strcuture of the problem may look like the following:


| x        | 1     | 2     | 3     |...    |...    | y     | y+1   | ...   | ...   | N  |
| -------- | ----- | ----- | ----- | ----- | ----- | ----- | ----- | ----- | ----- | ----- |
| check(x) | true  | true  | true  | true  | true  | true  | false | false | false | false |

According to the problem one may be required to find either y or (y+1) over a range of discrete values (the sequence above uses `[1,N]`) whose bounds depend on the statement. The sequence can be the reverse as well (all `false` followed by all `true`) depending on the statement.

Try solving [this problem](https://codeforces.com/contest/1201/problem/C). You may binary search the answer over the possible range `[1,2e9]`. The sequence of this problem is the one showed above.

[Here](https://codeforces.com/contest/1201/submission/88821555) is the solution code to the problem.

### Resources
* [Basic binary seach [B]](https://www.hackerearth.com/practice/algorithms/searching/binary-search/tutorial/)
* [Basic binary search [V]](https://www.youtube.com/watch?v=j5uXyPJ0Pew)

* [Discrete binary search [B]](https://oldaddr.wordpress.com/2014/06/28/binary-search-the-answer/)
* [Both [B]](https://www.topcoder.com/thrive/articles/Binary%20Search)

### Problems
* [Codeforces 706B](https://codeforces.com/problemset/problem/706/B)
* [Codeforces 1187B](https://codeforces.com/contest/1187/problem/B)
* [Codeforces 1208B](https://codeforces.com/contest/1208/problem/B)
* [Codeforces 812C](https://codeforces.com/contest/812/problem/C)
* [Codeforces 269B](https://codeforces.com/contest/269/problem/B)
* [Codeforces 118D2](https://codeforces.com/contest/1118/problem/D2)
* [Codeforces 1257D](https://codeforces.com/problemset/problem/1257/D)

## Ternary Search
Ternary Seach is used in specific situations when the given function has a **U or an inverted U shape** i.e has a **distinct minimum or maximum** over a given discrete valued range.
The algorithm finds the **maxima/minima of the given function in logarithmic time**.

### Resources
* [Geeks for Geeks](https://www.geeksforgeeks.org/ternary-search/)
* [HackerEarth](https://www.hackerearth.com/practice/algorithms/searching/ternary-search/tutorial/)
* [CP algorithms](https://cp-algorithms.com/num_methods/ternary_search.html) - try reading this. Very detailed explanation.

**Note**: Ternary search may not be as important and/or common, but it is good to know. You may skip it if you wish.