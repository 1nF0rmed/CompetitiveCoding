def alphabeticShift(inputString):
    strs = 'abcdefghijklmnopqrstuvwxyz'
    res = []
    for i in inputString:
        res.append(strs[(strs.index(i) + 1) % 26])
    
    return ''.join(res)


print(alphabeticShift("abcd"))