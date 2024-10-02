N=int(input())
for i in range(int(N)):
    string=input()
    print("Case #"+str(i+1)+":",end=" ") # The built-in function str() was overwritten by a variable named str. Rename the variable to something else.
    Strwords=list(map(str,string.split()))
    Strwords.reverse()
    for c in Strwords:
        print(c,end=" ")