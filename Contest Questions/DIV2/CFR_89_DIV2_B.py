def main():
    n = int(input())
    for i in range(1,n+2):
        a = list(range(i))
        s = str(a).replace(',','')
        x = s[1:-2]
        print(" "*2*(n-i+1)+s[1:-2] +str(i-1)+x[::-1])

    for i in range(n,0,-1):
        a = list(range(i))
        s = str(a).replace(',','')
        x = s[1:-2]
        print(" "*2*(n-i+1)+s[1:-2]+str(i-1)+x[::-1])
if __name__ == '__main__':
    main()