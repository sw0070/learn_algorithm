#汉诺塔问题--图
def hanio(n, a, b, c):
    if n>0:
        #n-1从a经过c到b
        hanio(n-1, a, c, b)
        #最后一个a-->c
        print("move %s to %s" % (a, c))
        #n-1从b经过a到c
        hanio(n-1, b, a, c)
hanio(3, 'A', 'B', 'C')













