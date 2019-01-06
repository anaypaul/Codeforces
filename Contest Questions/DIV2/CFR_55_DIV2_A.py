def main():
    s = input()
    lower = 0
    upper = 0
    for each in s:
        if ( 65 <= ord(each) and ord(each)<=90 ):
            upper += 1
        elif (97 <= ord(each) and ord(each) <= 122):
            lower += 1
    if(lower >= upper ):
        ans = s.lower()
    else:
        ans = s.upper()
    print(ans)
if __name__ == '__main__':
    main()