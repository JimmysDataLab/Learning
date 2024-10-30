# Greatest Common Divisor 

def gcd_naive(arr):
    gcd = 1
    for i in range(2,arr[-1]+1):
        if arr[-1]%i == 0 and arr[0]%i == 0:
            gcd = max(gcd,i)
    return gcd

def gcd_euclid(arr):

    if arr[-1] == 0:
        return arr[0]
    
    else:
        return gcd_euclid([arr[-1],arr[0]%arr[-1]])


arr = list(map(int,input().split(' ')))
arr.sort(reverse=True)
gcd_euclid = gcd_euclid(arr)
gcd_naive = gcd_naive(arr)

print(gcd_euclid)



