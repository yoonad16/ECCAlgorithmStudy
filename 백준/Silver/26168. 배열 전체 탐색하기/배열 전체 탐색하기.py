from bisect import bisect_left, bisect_right

def case1(key):
    return n - bisect_left(A, key)

def case2(key):
    return n - bisect_right(A, key)

def case3(key1, key2):
    return bisect_right(A, key2) - bisect_left(A, key1)

n, m = map(int, input().split())
A = sorted(list(map(int, input().split())))

for _ in range(m):
    inputs = list(map(int, input().split()))
    if inputs[0] == 1:
        key = inputs[1]
        print(case1(key))
    elif inputs[0] == 2:
        key = inputs[1]
        print(case2(key))
    elif inputs[0] == 3:
        key1, key2 = inputs[1], inputs[2]
        print(case3(key1, key2))
