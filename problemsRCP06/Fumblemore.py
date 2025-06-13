con = input()

def valitdateInput(con):
    if con[-1] == 'E':
        return False
    for i in range(len(con)):
        if con[i] == 'O':
            if i < len(con) - 1:
                if con[i + 1] == 'O':
                    return False
    return True

if valitdateInput(con):
    num = 0
    done = False
    while not done:
        cnum = num
        for i in range(len(con)):
            if con[i] == 'E' and cnum % 2 == 0:
                cnum = cnum // 2
            elif con[i] == 'E' and cnum % 2 != 0:
                num += 1
                break
            elif con[i] == 'O' and cnum % 2 != 0:
                cnum = 3 * cnum + 1
            else:
                num += 1
                break
            if i >= len(con) - 1:
                if cnum & -cnum == cnum:
                    done = True
                    break
                else:
                    num += 1
                    break
    print(num)
else:
    print("INVALID")
