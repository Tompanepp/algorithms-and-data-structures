def search(list, value):
    midpoint = 1
    while(midpoint > 0):
        midpoint = int(len(list)/2)
        midpoint_value = list[midpoint]
        if(midpoint_value == value):   
            return midpoint_value
        elif(value <= midpoint_value):
            list = list[0:midpoint]
        else:
            list = list[midpoint:]
    return None

list = [1,2,4,5,6,8,8,9]
print(search(list,9))# 9
print(search(list,4))# 4
print(search(list,0))# 4

data = [1,2,3,4,5,6,7,8,9,10]
print(search(data, 8))
