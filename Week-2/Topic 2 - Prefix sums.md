# Prefix sums
Given an array `A` of `n` elements, prefix sums are a very powerful technique that allows you to calculate the sum of any range of elements `[l, r]` for `1 <= l <= r <= n` in `O(1)` constant time with the help of `O(n)` pre-processing.

The trick is to pre-calculate in another array `prefix`, of cumulative sums, such that for each `i` from `1 to n`, `prefix[i]` stores the sum a[1] + a[2] + ... + a[i]. Then, the sum of elements in the range `[l,r]` can be easily found out as `prefix[r] - prefix[l-1]`.

* [Tutorial [B]](https://www.hackerrank.com/topics/prefix-sum)
* [Tutorial [V]](https://www.youtube.com/watch?v=pVS3yhlzrlQ)
* [Tutorial [V]](https://www.youtube.com/watch?v=5iW84xlL0j0): great resource, however it is in Russian with english subtitles.

#### Problems
* [Spoj CSUM](https://www.spoj.com/problems/CSUMQ/)
* [Leetcode 560](https://leetcode.com/problems/subarray-sum-equals-k/)
* [Leetcode 523](https://leetcode.com/problems/continuous-subarray-sum/)
* [Leetcode 1248](https://leetcode.com/problems/count-number-of-nice-subarrays/)
* [Leetcode 1477](https://leetcode.com/problems/find-two-non-overlapping-sub-arrays-each-with-target-sum/)

##### Challenging
* [CF 1118B](https://codeforces.com/contest/1118/problem/B)
