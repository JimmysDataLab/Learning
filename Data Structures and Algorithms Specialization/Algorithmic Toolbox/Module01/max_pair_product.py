def max_pair_prod_naive(arr):
    prod = 0
    n = len(arr)
    for i in range(0,n):
        for j in range(i+1,n):
            prod = max(prod,arr[i]*arr[j])

    return prod


if __name__ == "__main__":
    _ = int(input())
    arr = list(map(int, input().split()))
    #prod = max_pair_prod_naive(arr)
    arr.sort()
    prod = arr[-1]*arr[-2]
    print(prod)



