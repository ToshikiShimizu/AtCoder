N = int(input())
X = list(map(int, input().split()))
costs = []
for i in range(1,101):
    cost = 0
    for x in X:
        cost += (x-i)**2
    costs.append(cost)
print (min(costs))