# set_operations.py

# -----------------------------
# 1. Creation
# -----------------------------
a = {1, 2, 3, 4}
b = set([3, 4, 5, 6])
empty = set()        # {} is NOT an empty set

print("a:", a)
print("b:", b)
print("empty:", empty)

# -----------------------------
# 2. Add / Update
# -----------------------------
a.add(10)
print("\nAfter add:", a)

a.update([20, 30], {40, 50})
print("After update:", a)

# -----------------------------
# 3. Remove Elements
# -----------------------------
a.remove(10)     # KeyError if not present
print("\nAfter remove:", a)

a.discard(100)   # No error if missing
print("After discard:", a)

x = a.pop()      # Removes random element
print("Popped element:", x)
print("After pop:", a)

# -----------------------------
# 4. Copy / Clear
# -----------------------------
c = a.copy()
print("\nCopy c:", c)

c.clear()
print("After clear c:", c)

# -----------------------------
# 5. Membership Test
# -----------------------------
print("\nIs 3 in a?", 3 in a)
print("Is 99 in a?", 99 in a)

# -----------------------------
# 6. Set Mathematical Operations
# -----------------------------
print("\nUnion:", a | b)
print("Intersection:", a & b)
print("Difference (a - b):", a - b)
print("Symmetric Difference:", a ^ b)

# Method versions
print("\nUnion:", a.union(b))
print("Intersection:", a.intersection(b))
print("Difference:", a.difference(b))
print("Symmetric Difference:", a.symmetric_difference(b))

# -----------------------------
# 7. Update Operations
# -----------------------------
d = a.copy()
d |= b
print("\nUnion update:", d)

d = a.copy()
d &= b
print("Intersection update:", d)

d = a.copy()
d -= b
print("Difference update:", d)

d = a.copy()
d ^= b
print("Symmetric difference update:", d)

# -----------------------------
# 8. Subset / Superset
# -----------------------------
x = {1, 2}
y = {1, 2, 3, 4}

print("\nSubset:", x.issubset(y))
print("Superset:", y.issuperset(x))
print("Disjoint:", x.isdisjoint({9, 10}))

# -----------------------------
# 9. Iteration
# -----------------------------
print("\nIterating over set:")
for elem in a:
    print(elem, end=" ")
print()

# -----------------------------
# 10. Length
# -----------------------------
print("\nLength of a:", len(a))

# -----------------------------
# 11. Frozen Set (Immutable)
# -----------------------------
fs = frozenset([1, 2, 3])
print("\nFrozen set:", fs)

# fs.add(4)  # ERROR: frozenset is immutable

# -----------------------------
# 12. Set from String
# -----------------------------
s = set("banana")
print("\nUnique characters:", s)

# -----------------------------
# 13. Practical Use: Remove Duplicates
# -----------------------------
arr = [1, 2, 2, 3, 4, 4, 5]
unique = list(set(arr))
print("\nUnique list:", unique)
