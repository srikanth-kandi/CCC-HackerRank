def smallest_repeating_string(s):
    n = len(s)
    for i in range(1, n+1):
        if n % i == 0:
            # Check if s can be generated by repeating a substring of length i
            sub = s[:i]
            if sub * (n // i) == s:
                return sub
    # s itself is the smallest repeating string if no other substring works
    return s


s = input()
result = smallest_repeating_string(s)
print(result)