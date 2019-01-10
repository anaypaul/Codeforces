def main():
    s = input()
    s = s.replace("WUB","-")
    s = s.replace("-"," ").strip()
    print(s)

if __name__ == '__main__':
    main()