s = input()
small_case = 'abcdefghijklmnopqrstuvwxyz'
flag = True
s = s.lower()
for i in range(len(small_case)):
    if (small_case[i] not in s):
        flag = False
        break
if (flag):
    print("France")
else:
    print("Italy")
