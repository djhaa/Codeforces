mod = 1000000007
t = int(input())
while t:

    n, k = list(map(int, input().split()))
    print(pow(n, k, mod))
    t -= 1