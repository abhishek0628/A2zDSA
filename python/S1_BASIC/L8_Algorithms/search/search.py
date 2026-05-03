1 in [1,2,3]        # list
'a' in "apple"      # string
'key' in {'key':1}  # dict (checks keys)

# FAST
s = {1,2,3}
print(2 in s)   # O(1)

# SLOWER
l = [1,2,3]
print(2 in l)   # O(n)

d = {"a": 10, "b": 20}

print("a" in d)         # True (checks keys)
print(10 in d.values()) # True but slower

# fast
# if key in d:

# # slower and unnecessary
# if key in d.keys():

arr = [10, 20, 30]

print(arr.index(20))   # 1

import bisect

arr = [1, 3, 5, 7]

print(bisect.bisect_left(arr, 5))  # 2

bisect_left  # first valid position
bisect_right # position after duplicates

s = "hello"

print("ell" in s)   # True

s.find("ell")   # returns index or -1

arr = [1,2,3,4,5]
s = set(arr)

print(3 in s)  # O(1)

# find duplicates
arr = [1,2,3,2]
seen = set()

for x in arr:
    if x in seen:
        print("duplicate:", x)
    seen.add(x)

arr = [1,2,3,4]

result = [x for x in arr if x > 2]

arr = [1,2,3]

print(any(x > 2 for x in arr))  # True
print(all(x > 0 for x in arr))  # True

