import sys
import random
random.seed(69)
size = 1000



def fibonacci(n):
    if n == 1: return 0
    if n == 2: return 1

    a, b = 0, 1
    for _ in range(2,n):
        a, b = b, a+b
    return b



if __name__ == "__main__":
    for id, n in enumerate([random.randint(1,100) for _ in range(size)]):
        print(f"{id+1} {n} {fibonacci(n)}")