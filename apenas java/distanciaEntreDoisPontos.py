p1 = [float(x) for x in input().split()]
p2 = [float(x) for x in input().split()]

print('{:.4f}'.format(((p2[0] - p1[0])**2 + (p2[1] - p1[1])**2)**(1/2)))