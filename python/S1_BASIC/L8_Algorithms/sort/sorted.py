# return new list
arr=[1,2,89,32,90,12]
new_arr=sorted(arr)
print(arr)
print(new_arr)

students = [("abhi", 20), ("raj", 20), ("aman", 18)]

sorted_students = sorted(students, key=lambda x: x[1])
print(sorted_students)

arr = ["apple", "banana", "kiwi"]
print(sorted(arr, key=len))

students = [
    {"name": "abhi", "age": 21},
    {"name": "raj", "age": 19}
]

print(sorted(students, key=lambda x: x["age"]))

students = [
    ("abhi", 21),
    ("raj", 21),
    ("aman", 19)
]
# sort by age then name
print(sorted(students, key=lambda x: (x[1], x[0])))

sorted(arr, reverse=True)

from operator import itemgetter

students = [("abhi", 21), ("raj", 19)]

print(sorted(students, key=itemgetter(1)))

d = {"a": 3, "b": 1, "c": 2}

# by keys
print(sorted(d))

# by values
print(sorted(d.items(), key=lambda x: x[1]))

import heapq

arr = [5, 1, 9, 2]

print(heapq.nsmallest(2, arr))