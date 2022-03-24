def solution(v):
    answer = []
    cnt_x = []
    cnt_y = []
    for x,y in v:
        if x not in cnt_x:
            cnt_x.append(x)
        else:
            cnt_x.remove(x)
        if y not in cnt_y:
            cnt_y.append(y)
        else:
            cnt_y.remove(y)
    answer = cnt_x + cnt_y
    return answer