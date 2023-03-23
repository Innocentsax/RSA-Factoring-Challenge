#!/usr/bin/python3
import random
import sys

def factors():
    with open(sys.argv[1], "r") as prime_nums:
        num_in = prime_nums.readline()
        while num_in != '':
            p = random.randint(0, 100)
            q = int(num_in)
            n = p * q
            num_in = prime_nums.readline()
            print("{}".format(n))
factors()
