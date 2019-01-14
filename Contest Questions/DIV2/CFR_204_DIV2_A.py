def main():
    n = int(input())
    arr = list(map(int, input().split()))
    if(arr.count(5)>=9 and arr.count(0)>=1):
        ans = "5"*(arr.count(5)//9)*9 + "0"*arr.count(0)
        print(ans)
    else:
        if(arr.count(0)==0):
            print("-1")
        else:
            print("0")

if __name__ == '__main__':
    main()