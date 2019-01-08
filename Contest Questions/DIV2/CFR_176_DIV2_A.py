def main():
    mat = [['.' for i in range(4)] for i in range(4)]
    
    for j in range(4):
        s = input()
        s = " ".join(s)
        s = list(s.split(" "))
        mat[j] = s
    
    flag = False
    for i in range(3):
        for j in range(3):
            if(mat[i][j]==mat[i+1][j] and mat[i][j]==mat[i][j+1] and mat[i][j]==mat[i+1][j+1]):
                print("YES")
                flag = True
                break
            elif(mat[i][j]==mat[i+1][j] and mat[i][j]==mat[i][j+1] and mat[i][j]!=mat[i+1][j+1]):
                print("YES")
                flag = True
                break
            elif(mat[i][j]==mat[i+1][j] and mat[i][j]!=mat[i][j+1] and mat[i][j]==mat[i+1][j+1]):
                print("YES")
                flag = True
                break
            elif(mat[i][j]!=mat[i+1][j] and mat[i][j]==mat[i][j+1] and mat[i][j]==mat[i+1][j+1]):
                print("YES")
                flag = True
                break
            elif(mat[i][j]!=mat[i+1][j] and mat[i][j]!=mat[i][j+1] and mat[i][j]!=mat[i+1][j+1]):
                print("YES")
                flag = True
                break
            else:
                continue
        if(flag==True):
            break
    if(flag==False):
        print("NO")
if __name__ == '__main__':
    main()