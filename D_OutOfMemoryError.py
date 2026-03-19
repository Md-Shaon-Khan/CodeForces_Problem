
t = int(input())
 
for i in range(t):
    n, m, h = map(int, input().split())
    
    list1 = list(map(int, input().split()))
    listO = list1.copy()  
    
    for j in range(m):
        ii, v = map(int, input().split())
        
 
        list1[ii-1] = list1[ii-1] + v
        
 
        if list1[ii-1] > h:
            list1 = listO.copy() 
            
    print(*list1)