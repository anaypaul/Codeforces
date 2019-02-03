def main():
    n = input()
    num = int(n[-2:])
    if(num%4==0):
        print(4)
    else:
        print(0)

if __name__ == '__main__':
    main()