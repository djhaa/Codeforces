def get(nums, left, right, ans, cnt):
    if left > right:
        return
    if left == right:
        ans[left] = cnt
        return
    maxinum = nums[left]
    idx = left
    for i in range(left, right+1):
        if nums[i] > maxinum:
            maxinum = nums[i]
            idx = i
    ans[idx] = cnt
    get(nums, left, idx-1, ans, cnt+1)
    get(nums, idx+1, right, ans, cnt+1)

if __name__ == '__main__':

    t = int(input())
    while t:
        n = int(input())
        nums = list(map(int, input().split()))
        ans = [0 for _ in range(n)]
        get(nums, 0, n-1, ans, 0)
        ans = list(map(str, ans))
        print(" ".join(ans))
        t -= 1