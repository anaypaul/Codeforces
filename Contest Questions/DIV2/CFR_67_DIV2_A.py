def main():
    a = int(input())
    b = int(input())
    c = a + b
    a1 = int(str(a).replace('0',''))
    b1 = int(str(b).replace('0',''))
    sum1 = a1 + b1
    c1 = int(str(c).replace('0',''))
    if(sum1==c1):
        print("YES")
    else:
        print("NO")

if __name__ == '__main__':
    main()
    