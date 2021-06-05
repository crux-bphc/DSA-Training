## Implementation
Implementation problems do not rely on the knowledge of any particular data structure or algorithm. They usually involve implementing some idea or may require some observations to solve the problem. Strings are very common in implementation problems, so if you aren't familiar with C++ ```std::string```, do read up on it and get familiar with it.

> For interviews try to think about how to code it cleanly before jumping right into it.
> 
> -- <cite>Someone, probably.</cite>

#### Problems
* [Codeforces 4A](https://codeforces.com/problemset/problem/4/A)
* [Leetcode 61](https://leetcode.com/problems/plus-one/)
* [Leetcode 387](https://leetcode.com/problems/first-unique-character-in-a-string/)
* [Leetcode 925](https://leetcode.com/problems/long-pressed-name/)

<details>
    <summary>Leetcode 387 Hint</summary>
    The size of the string, n, is at most 10<sup>6</sup>. So an O(n<sup>2</sup>) solution will exceed time limit. What we can do instead is find the frequency of each character 'a'-'z'. Then it becomes easy to check if a character repeats or not.
</details>

## Greedy
A 'greedy' approach is one where a locally optimal choice leads to a globally optimal one. So at every step, we make the best choice and this leads to an overall optimal answer.

#### Resources
* [Tutorial [B]](https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/tutorial/)

#### Problems
* [Codeforces 1148A](https://codeforces.com/problemset/problem/1148/A)
* [Codeforces 1077B](https://codeforces.com/problemset/problem/1077/B)
* [Codeforces 1076A](https://codeforces.com/problemset/problem/1076/A)
* [Leetcode 1221](https://leetcode.com/problems/split-a-string-in-balanced-strings/)
* [Leetcode 969](https://leetcode.com/problems/pancake-sorting/)

<details>
    <summary>Codeforces 1077B Hint</summary>
    Most codeforces problems have editorials (explanations of solutions). You can find them on the bottom right, usually labelled 'Tutorial'. Read them if you are stuck.
</details>

[What is lexicographic order?](https://www.migenius.com/doc/realityserver/latest/resources/general/iray/api_reference/math/html/mi_def_lexicographic_order.html)

<details>
    <summary>Leetcode 1221 Hint</summary>
    Think greedy :)
</details>