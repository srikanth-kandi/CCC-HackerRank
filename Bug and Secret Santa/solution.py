n = int(input())
index = [i for i in range(1, n+1)]
l, res = list(map(int, input().split())), []
for i in range(len(l)):
    res.append([l[i], index[i]])
res.sort()
for i in range(len(res)):
    print(res[i][1], end=" ")
