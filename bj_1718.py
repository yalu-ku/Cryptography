s = input()
e = input()
for i in range(len(s)):
    if s[i] != ' ':
        b = ord(s[i]) - ord(e[i % len(e)]) + 96
        if b < 97:
            b = b + 26  # 90 + 26
        print(chr(b), end='')
    else:
        print(' ', end='')
