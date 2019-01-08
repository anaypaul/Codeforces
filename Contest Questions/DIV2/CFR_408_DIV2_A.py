def main():
    n,m,k = map(int, input().split())
    arr = list(map(int, input().split()))
    left_side_index = -1
    right_side_index = -1
    for i in range(m-1,len(arr),1):
        if(arr[i] != 0 and arr[i] <= k):
            right_side_index = i
            break
    for i in range(m-1,-1,-1):
        if(arr[i]!=0 and arr[i]<=k):
            left_side_index = i
            break
    if(left_side_index != -1 and right_side_index != -1):
        print(min((m-1)-left_side_index,right_side_index-(m-1))*10 )
    elif(left_side_index != -1 and right_side_index == -1):
        print(((m-1)-left_side_index)*10)
    elif(left_side_index == -1 and right_side_index != -1):
        print((right_side_index-(m-1))*10)
if __name__ == '__main__':
    main()