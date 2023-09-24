from sys import stdin, stdout
 
def main():
    n, q = map(int, stdin.readline().split())
    a = list(map(int, stdin.readline().split()))
    s = sum(a)
    parity = 1
    for i in range(q):
        o = list(map(str, stdin.readline().split()))
        if o[0] == 'sum':
            print(parity*s)
        elif o[0] == 'flip':
            parity *= -1
            k = o[1]
            o = o[2:]
            
            for i in o:
                s -= a[int(i) - 1]
                a[int(i) - 1] *= -1
                s += a[int(i) - 1]
                
            
main()
