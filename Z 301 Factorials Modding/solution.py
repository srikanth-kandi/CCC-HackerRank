def factorial_mod(a, b, m):
    prod = 1
    for i in range(b+1, a+1):
        prod = (prod * i) % m

    return prod % m


a, b, m = map(int, input().split())

result = factorial_mod(a, b, m)

print(result)
