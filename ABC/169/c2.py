

for i in range(1000):
    b = i / 100
    if not (int(float(b)*100+0.05)==int(float(b)*100)):
        print(b,int(float(b)*100+0.5),int(float(b)*100))

b = 9.95
print (int(float(b)*100))
print(float(b*100))