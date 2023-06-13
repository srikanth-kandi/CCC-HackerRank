n = int(input())
c = 1
zeros = 0
for i in range(n):
    tmp = int(input())
    while(tmp%10 == 0):
        zeros += 1
        tmp //=10
    c *= tmp
print(str(c)+'0'*zeros)