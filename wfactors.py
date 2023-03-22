#!/usr/bin/python3
import sys


def factorize(num):
    """ Generate 2 factors for a given number"""
    factor1 = 2
    while (num % factor1):
        if (factor1 <= num):
            factor1 += 1

    factor2 = num // factor1
    return (factor2, factor1)


if len(sys.argv) != 2:
    sys.exit(f"Wrong usage: {sys.argv[0]} <file_path>")

filename = sys.argv[1]

file = open(filename, 'r')
lines = file.readlines()

for line in lines:
    num = int(line.rstrip())
    factor2, factor1 = factorize(num)
    print(f"{num} = {factor2} * {factor1}")
