def main():
    n = int(input())
    for i in range(n):
        s = input()
        if(len(s) > 10):
            print(s[1:len(s)-1])
            s = s[0] + str(len(s[1:len(s)-1])) + s[-1]
            print(s)
        else:
            print(s)

if __name__ == '__main__':
    main()