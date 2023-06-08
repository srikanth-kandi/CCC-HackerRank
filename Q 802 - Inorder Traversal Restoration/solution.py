def convert(s):
    if (len(s) == 1):
        return s
    h = len(s)-1
    left = s[:h//2]
    right = s[h//2:h]
    root = s[h]
    return convert(left)+root+convert(right)


s = input()
print(convert(s))
