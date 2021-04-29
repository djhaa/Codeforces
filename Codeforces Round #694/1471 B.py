from collections import deque

def solveTest():
    n, x = list(map(int, input().split()))    
    nums = list(map(int, input().split()))
    ans = sum(nums)
    q = deque()
    for i in range(n):
        if nums[i] % x:
            print(ans)
            return
        else:
            ans += nums[i]
            q.append([nums[i] // x, x])
    while q:
        if q[0][0] % x:
            print(ans)
            return
        else:
            ans += q[0][0] * q[0][1]
            q.append([q[0][0] // x, q[0][1] * x])
            q.popleft()

if __name__ == '__main__':
    t = int(input())
    while t:
        solveTest()
        t -= 1