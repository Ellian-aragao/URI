dic = {
    1 : 4,
    2 : 4.5,
    3 : 5,
    4 : 2,
    5 : 1.5,
}
custos = 0 
a = [int(x) for x in input().split()]
custos += dic[a[0]]
custos *= a[1]
print("Total: R$ {:0.2f}".format(custos))