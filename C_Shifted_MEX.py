a = int(input())

for i in range(a):
  b = int(input())
  
  list1 = list(map(int,input().split()))
  set1 = sorted(list(set(list1)))
  count = 0
  max1 = 0
  for i in range(len(set1) - 1):
    if (set1[i+1] - set1[i]) == 1:
      count += 1
      if count >= max1:
        max1 = count
    else:
      count = 0
  print(max1+1)