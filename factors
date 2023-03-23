#!/usr/bin/python3
"""factorize given set of numbers in a file to product of two small numbers"""
from sys import argv


def factorize(number_to_check):
    """"find two small numbers that multiply to give a given number"""
    i = 2

    if number_to_check < 2:
        return
    
    while number_to_check % i:
        i += 1
    print("{:.0f}={:.0f}*{:.0f}".format(number_to_check, number_to_check / i, i))

if len(argv) != 2:
    exit()

try:
    with open(argv[1]) as file:
        line = file.readline()

        while line != "":
            number_to_check = int(line.split('\n')[0])
            factorize(number_to_check)
            line = file.readline()
except:
    pass
