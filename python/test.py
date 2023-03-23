#!/usr/bin/python3
"""
This is the "example" module.
The example module supplies one function, factorial().  For example,
>>> factorial(5)
120
"""
def factorial(n):
    """
    >>> [factorial(n) for n in range(6)]
    [1, 1, 2, 6, 24, 120]
    >>> factorial(4)
    24
    """
    import math
    if not n >= 0:
        raise ValueError("n must be >= 0")
    if math.floor(n) != n:
        raise ValueError("n must be an integer")
    if n+1 == n:
        raise OverflowError("n too big")
    res = 1
    factor = 2
    while factor <= n:
        res *= factor
        factor += 1
    return res
if __name__ == "__main__":
    import doctest
    doctest.testmod()
