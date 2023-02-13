def solution(sum):
    operation = input()
    if (operation == "++X"):
        sum += 1
    elif (operation == "X++"):
        sum += 1
    elif (operation == "--X"):
        sum -= 1
    elif (operation == "X--"):
        sum -= 1
    else:
        pass
    return sum

test_case = int(input())
sum = 0
while test_case > 0:
    sum = solution(sum)
    test_case -= 1

print(sum)


