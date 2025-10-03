#List
empty=[] #empty list
number=[1,2,3,4,5]
fruites=["apple","banana","orange"]
mixed = [1, "apple", True, 3.14]
print(number[0]) #first element of list
print(number[-1]) #last element of list
print(number[0:3]) #elements from index 0 to index 2(not include 3)
print(number[:3]) #elements from index 0 to index 2(not include 3)
print(number[-5:]) #start from indexing from last then go to last
number.append(8) #append at last
number.insert(1,9) #insert at index 1
number.pop() #remove last element
print(number)

#List operation
a=[1,2,3,4]
b=[8,9,10,11]
c=a+b #concatanation
d=a*2 #repetition
print(20 in number) #check whether 20 is present in the list number if presnt return True else False
print(20 not in number) #check whether 20 is present in the list number if not presnt return True else False
print(c)

#Looping through list
for n in number:
    print(n)

for i in range(len(number)):
    print(number[i])    

squared=[x**2 for x in number]
print(squared)

#nested list
matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

print(matrix[0][1])  # 2
print(matrix[2][2])  # 9
