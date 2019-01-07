def main():
    num = input()
    x = num.count('4')+ num.count('7')
    if(x==4 or x==7 ):
        print("YES")
    else:
        print("NO")

if __name__ == '__main__':
    main()