def main():
    s1 = input()
    s2 = input()
    if(s1[::-1] == s2):
        print("YES")
    else:
        print("NO")

if __name__ == '__main__':
    main()