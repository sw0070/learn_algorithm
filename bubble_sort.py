#冒泡排序

#列表没相邻两个数，如果前面比后面大，则交换这两个数
#无序区 有序区
#n-1趟 无序区范围

def bubble_sort(lt):
    n =len(lt)
    for i in range(n-1):
        exchange = False
        for j in range(n-i-1):
            if lt[j] > lt[j+1]:
                lt[j], lt[j+1] = lt[j+1], lt[j]
                exchange = True
        print(lt)
        if not exchange:
            return 

lt = [9,8,7,1,2,3,4,5,6]
bubble_sort(lt)
#优化     如果在一趟中未发生交换,后面无需













