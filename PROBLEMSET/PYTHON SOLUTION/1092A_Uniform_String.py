def solution(n,k):
    res = ""
    for i in range(k):
        res += chr(97+i)
    res = res*(n//k)
    for i in range(n%k):
        res += chr(97+i)
    return res

def main():
    t = int(input())
    while(t>0):
        t-=1
        n,k = map(int, input().split())
        print(solution(n,k))

if __name__ == '__main__':
    main()