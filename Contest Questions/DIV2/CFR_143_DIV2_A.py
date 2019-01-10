def main():
    n = int(input())
    ans = 0
    for i in range(n):
        s = input()
        if(s.count('1') >= 2):
            ans += 1
    print(ans)

if __name__ == '__main__':
    main()