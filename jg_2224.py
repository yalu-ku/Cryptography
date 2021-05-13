# N = input()
#
# N = N + 21

# print(ord('A'))

# for i in range(65, 91):
#     for j in range(86, )
#
s = input()
for i in s:
    if 'A' <= i <= 'Z':
        print(chr(((ord(i)- 65 + 21) % 26) + 65), end='')
    else:
        print(i, end='')
    # print(chr(ord(i)+21))

