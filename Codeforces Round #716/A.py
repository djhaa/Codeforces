import math
t = int(input())
while t:
    n = int(input())
    nums = list(map(int, input().split()))
    for i in nums:
        if pow(int(math.sqrt(i)), 2) != i:
            print("YES")
            break
    else:
        print("NO")
    t -= 1