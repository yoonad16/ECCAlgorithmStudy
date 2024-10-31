while True:
    string = input()
    if string == '.':
        break

    stack = []
    balanced = True
    for c in string:
        if c == '(' or c == '[':
            stack.append(c)
        elif c == ')' or c == ']':
            if len(stack) == 0:
                print('no')
                balanced = False
                break
            else:
                left = stack.pop()
                if (c == ')' and left != '(') or (c == ']' and left != '['):
                    balanced = False
                    print('no')
                    break
    if balanced and len(stack) == 0:
        print('yes')
    elif balanced:
        print('no')
