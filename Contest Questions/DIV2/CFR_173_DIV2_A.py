def main():
    n = int(input())
    val = 0
    for i in range(n):
        s = input()
        if('++' in s):
            val+=1
        elif('--' in s):
            val-=1
    print(val)
if __name__ == '__main__':
    main()