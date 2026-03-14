num = int(input())
fat = 1
for num in range(num, 0, -1):
    fat = num * fat
print(fat)