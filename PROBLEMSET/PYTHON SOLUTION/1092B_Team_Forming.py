def solution(arr):
    arr.sort()
    ans = 0
    for i in range(0,len(arr),2):
        ans += arr[i+1] - arr[i]
    return ans

def main():
    n = int(input())
    arr = list(map(int, input().split()))
    print(solution(arr))
if __name__ == '__main__':
    main()