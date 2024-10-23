# Greatest Common Divisor 

arr = list(map(int,input().split(' ')))
root = min(arr)
gcd = [None for _ in range(len(arr))]


for id,num in enumerate(arr):
        for i in range(2,root+1):
            if num%i == 0 and root%i == 0:
                gcd[id] = i
print(arr)
print(gcd)