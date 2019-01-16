def check(year):
    year = str(year)
    if(year.count(year[0])==1 and  year.count(year[1])==1 and  year.count(year[2])==1 and year.count(year[3])==1):
        return True
    else:
        return False
def main():
    s = input()
    for i in range(int(s)+1,9999999,1):
        if(check(i)):
            print(i)
            break

if __name__ == '__main__':
    main()