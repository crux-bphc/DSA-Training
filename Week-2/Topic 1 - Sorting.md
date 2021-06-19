# Sorting
## Sorting Algorithms
Sorting is a very, very important technique that is used in a lot of problems. There are many standard sorting techniques that you are expected know. You may refer to [this](https://www.programiz.com/dsa/sorting-algorithm). In particular, you must know how [bubble sort](https://www.programiz.com/dsa/bubble-sort), [selection sort](https://www.programiz.com/dsa/selection-sort), [insertion sort](https://www.programiz.com/dsa/insertion-sort), [merge sort](https://www.programiz.com/dsa/merge-sort), [quick sort](https://www.programiz.com/dsa/quick-sort), [counting sort](https://www.programiz.com/dsa/counting-sort) and [heap sort](https://www.programiz.com/dsa/heap-sort) work and their respective time complexities (both average and worst case if they differ).

**Note**: You may skip heap sort for now; the heaps data structure will be covered later.

## STL Sort
If STL is allowed, you may directly use the in-built `sort()` function.

This `sort()` function works on arrays and vectors of all types. For an array `a` of size `n` it would be invoked as `sort(a, a + n)` whereas for a vector `v` it would be invoked as `sort(v.begin(), v.end())` to sort it completely.
* [Sorting an array](https://www.geeksforgeeks.org/sort-c-stl/)
* [Sorting a vector](https://www.journaldev.com/37678/sorting-a-vector-in-c-plus-plus)

To be more precise it can be invoked as `sort(a + l, a + r)` where `l` and `r` are some integers where `l < r`, `l >= 0` and `r <= size of the array` and will sort the elements in the range `[l, r)`. The invocation for a vector for the same functionality would be `sort(v.begin() + l, v.begin() + r)`.

**Note**: We can even use the `sort()` function on strings in the same way as we use on vectors. For a string `s`, `sort(s.begin(), s.end())` would sort the characters of the string.

### Problems
* [Leetcode 242](https://leetcode.com/problems/valid-anagram/)
* [Leetcode 1502](https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/)
* [CF 1041A](https://codeforces.com/contest/1041/problem/A)
* [Hackerrank Mark and Toys](https://www.hackerrank.com/challenges/mark-and-toys/problem)
* [CF 456A](https://codeforces.com/problemset/problem/456/A)
