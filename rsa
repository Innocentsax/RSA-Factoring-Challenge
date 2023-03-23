#!/usr/bin/python3
from sys import argv
import math
"""gets the first two factors of any number"""


def is_prime(num):
    """checks if a number is prime"""
    i = 3
    if num % 2 == 0:
        return False
    while i * i <= num:
        if num % i == 0:
            return False
        i += 2
    return True


def factory(num):
    """This factor function gets the factors of a number & prints them out"""
    if num % 2 == 0:
        i = 2
        print("{}={}*{}".format(num, int(num/i), i))
    else:
        sq = math.sqrt(num)
        if sq % 1 == 0:
            print("{}={}*{}".format(num, sq, int(num/sq)))
            return
        sq = int(sq) + 1
        for i in range(3, sq, +2):
            if num % i == 0:
                if is_prime(i):
                    print("{}={}*{}".format(num, int(num/i), i))
                    return


def factors(filename):
    """read_file"""
    with open(filename, encoding="utf-8") as my_file:
        for i in my_file.readlines():
            n = int(i)
            result = factory(n)


if __name__ == "__main__":
    factors(argv[1])
