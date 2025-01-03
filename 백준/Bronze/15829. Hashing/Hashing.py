alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

def Hashing(inputstring):
    sum = 0
    
    for index, c in enumerate(inputstring):
        a_i = alphabet.index(c) + 1
        sum += a_i * (31**(index))
    
    return sum % 1234567891

n = int(input())
val = str(input())
print(Hashing(val))