n = int(input())
l = list(map(int, input().split()))
first_person, small_person, j = l[0], l[0], 0
for i in range(1, len(l)):
    if (l[i] < first_person and small_person > l[i]):
        j = i
        small_person = l[i]
temp = l[0]
l[0] = l[j]
l[j] = temp
print(*l)
