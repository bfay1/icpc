from sys import stdin, stdout
def main():
    s = stdin.readline()
    stack = []
    length = len(s)
    l, r = 0, length - 1
    if s[r] == '\n':
        r -= 1
        length -= 1
    ispal = True
    while l < r:
        if s[l] != s[r]:
            ispal = False
        l += 1
        r -= 1
    if ispal:
        print(0)
    
    else:
        print(length - 1)
        for c in s:
            stack.append(c)
        if stack[-1] == '\n':
            stack.pop()
        stack.pop()
        while stack:
            print(length, stack[-1])
            stack.pop()
            length += 1
 
main()
