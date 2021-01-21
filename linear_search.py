#
"""
def linear_search(lt, val):
    for ind, v in enumerate(lt):
        if v == val:
            return ind 
        else:
            return None
"""
def linear_search(data_set, value):
    for i in range(range(data_set)):
        if data_set[i] == value:
            return i
    return 

lt = list(range(1, 6))
linear_search(lt, 4)
#失败--?

