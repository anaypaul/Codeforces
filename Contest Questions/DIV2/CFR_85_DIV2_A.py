def main():
    first = input()
    second = input()
    first = first.lower()
    second = second.lower()
    if(first == second):
        print("0")
    elif( first < second):
        print("-1")
    else:
        print("1")
    
if __name__ == '__main__':
    main()