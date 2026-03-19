t = int(input())

for i in range(t):
  a = int(input())
  list1 = list(map(int,input().split()))
  #max_index = list1.index(max(list1))
  # min_index = list1.index(min(list1))
  
  # list1[max_index],list1[min_index] = list1[min_index],list1[max_index]
  # print()
  max_v = max(list1)
  print(max_v*a)