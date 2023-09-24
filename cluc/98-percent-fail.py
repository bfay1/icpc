
from sys import stdin, stdout
 
def main():
    n, p = map(int, stdin.readline().split())
    a = list(map(int, stdin.readline().split()))
 
    a.sort()
    for i in a:
        if i < p:
            p += i
        if p <= i:
            print('NO')
            break
        if a[-1] < p:
            print('YES')
            break
    
main()
