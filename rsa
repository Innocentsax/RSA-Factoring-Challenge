#!/usr/bin/python3
from sys import argv

with open(argv[1]) as f:
    for line in f:
        num = int(line)
        print("{:d}=".format(num), end="")
        if num % 2 == 0:
            print("{}*2".format(num//2))
            continue
        for i in range(3, num, 2):
            if num % i == 0:
                factor = num//i
                for j in range(3, factor, 2):
                    if factor % j == 0 or i % j == 0:
                        break
                print("{}*{}".format(factor, i))
                break
