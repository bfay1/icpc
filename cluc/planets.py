from sys import stdin, stdout
 
def solve():
    n, c = map(int, stdin.readline().split())
    a = list(map(int, stdin.readline().split()))
    freq = {}
    for o in a:
        freq[o] = 1 + freq.get(o, 0)
    cost = 0
    for n in freq.values():
        cost += min(c, n)
    print(cost)
 
def main():
    t = int(stdin.readline())
    for i in range(t):
        solve()
main()
