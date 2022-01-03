# Primality and Factorization
A number is said to be prime if it is not ```1``` and is only divisible by itself and ```1```. By factorizing the number we can check if it is prime or not.

* Introduction - *CPH Ch 21: Number theory,* pg [197](https://cses.fi/book/book.pdf#page=207) - [198](https://cses.fi/book/book.pdf#page=208)
* Primality and Prime factorization - *CPH Ch 21,* pg [199](https://cses.fi/book/book.pdf#page=209)[Implementation](https://p.ip.fi/nsPJ)

<details>
    <summary>How to check divisibility?</summary>
    In C/C++ the modulo operator % can be used to check divisibility. If x is divisible by y, then x % y will evaluate to 0, otherwise it will be non-zero.
</details>

## Finding all the factors of a number
To find the all the factors of a number ```n```, we don’t have to check divisibility for all numbers from ```1``` to ```n```. Instead we can check each integer ```i``` from ```1``` to ```√n```. If ```i``` divides ```n```, then ```i``` is a factor of ```n```, and so is ```n/i```.

**Proof:** Let's say ```n = a * b```, then **either a or b has to be less than or equal to ```√n```**. Otherwise ```a * b``` will obviously be greater than ```n```.


**Note:** Make sure not to overcount in the case when ```n``` is a perfect square because ```i``` and ```n/i``` would both be ```√n```).

**Time complexity:** ```O(√n)```

## Finding the prime factorization of a number
For e.g. prime factorization of ```60``` is ```2 * 2 * 3 * 5```.

[Implementation](https://p.ip.fi/n8tX).

Why does this work?

**Time complexity:** ```O(√n)```

#### Problems
* [Codeforces 26A](https://codeforces.com/contest/26/problem/A)