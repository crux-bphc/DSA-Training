# Heaps

A Heap is a complete binary tree-based data structure with a specific ordering property. There are two types:
* **Max-Heap**: The key present at any node is greater than the keys present at both of its children. The largest key is at the root node.
* **Min-Heap**: The key present at any node is smaller than the keys present at both of its children. The smallest key is at the root node.

Heaps are used when the highest or lowest order/priority element needs to be removed. They allow quick access to this item in `O(1)` time. One use of a heap is to implement a priority queue.

A priority queue is a data structure, usually implemented using heaps, that supports finding max (or min) element in `O(1)` along with insertions and deletions in `O(logn)`.

**Note**: Heaps are usually implemented using arrays, which save overhead cost of storing pointers to child nodes.

#### Resources
* [Hackerearth tutorial [B]](https://www.hackerearth.com/practice/notes/heaps-and-priority-queues/)
* [Programiz tutorial [B]](https://www.programiz.com/dsa/heap-data-structure)
* [Array implementation](https://www.geeksforgeeks.org/building-heap-from-array/)
* [Priority queue tutorial [B]](https://www.programiz.com/dsa/priority-queue)

Free to use: [[C++](https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/)] [[Java](https://www.geeksforgeeks.org/priority-queue-class-in-java-2/)] [[Python](https://www.geeksforgeeks.org/heap-queue-or-heapq-in-python/)]
 
#### Problems
* [Interviewbit - k largest elements](https://www.interviewbit.com/problems/k-largest-elements/)
* [Leetcode 703](https://leetcode.com/problems/kth-largest-element-in-a-stream/)
* [Leetcode 1046](https://leetcode.com/problems/last-stone-weight/)
* [Leetcode 1673](https://leetcode.com/problems/find-the-most-competitive-subsequence/)
* [Atcoder ABC 141D](https://atcoder.jp/contests/abc141/tasks/abc141_d)