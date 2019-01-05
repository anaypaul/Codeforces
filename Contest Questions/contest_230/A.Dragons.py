def solution(s,n,X,Y):
    arr = zip(X,Y)
    new_arr = sorted(arr, key = lambda x : x[0])
    print(new_arr)
    for i in range(len(new_arr)):
        if( s <= int(new_arr[i][0])):
            return "NO"
        else:
            s += new_arr[i][1]
    return "YES"
def main():
    s , n = map(int,input().split())
    X = []
    Y = []

    for _ in range(n):
        x, y = map(int, input().split())
        X.append(x)
        Y.append(y)
    print(solution(s,n,X,Y)) 
if __name__ == '__main__':
    main()