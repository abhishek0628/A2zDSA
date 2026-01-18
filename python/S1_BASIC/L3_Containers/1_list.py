# list_operations.py
# One file. All list operations. No excuses.

def main():
    print("=== LIST CREATION ===")
    a = []
    b = [1, 2, 3, 4]
    c = list((5, 6, 7))
    d = list(range(1, 6))
    print(a, b, c, d)

    print("\n=== ACCESSING ELEMENTS ===")
    print(b[0])
    print(b[-1])
    print(b[1:3])
    print(b[::-1])

    print("\n=== UPDATING ELEMENTS ===")
    b[0] = 10
    b[1:3] = [20, 30]
    print(b)

    print("\n=== ADDING ELEMENTS ===")
    b.append(40)
    b.extend([50, 60])
    b.insert(1, 99)
    print(b)

    print("\n=== REMOVING ELEMENTS ===")
    b.pop()
    b.pop(1)
    b.remove(20)
    print(b)

    print("\n=== SEARCHING ===")
    print("Index of 30:", b.index(30))
    print("Count of 10:", b.count(10))

    print("\n=== MEMBERSHIP ===")
    print(30 in b)
    print(100 not in b)

    print("\n=== SORTING & REVERSING ===")
    b.sort()
    print("Sorted:", b)
    b.sort(reverse=True)
    print("Reverse sorted:", b)
    b.reverse()
    print("Reversed:", b)

    print("\n=== COPYING ===")
    x = b.copy()
    y = b[:]
    print(x, y)

    print("\n=== LENGTH ===")
    print(len(b))

    print("\n=== ITERATION ===")
    for val in b:
        print(val, end=" ")
    print()

    print("\n=== ENUMERATE ===")
    for i, val in enumerate(b):
        print(i, val)

    print("\n=== LIST COMPREHENSION ===")
    squares = [i * i for i in d]
    evens = [i for i in d if i % 2 == 0]
    print(squares)
    print(evens)

    print("\n=== MATHEMATICAL OPS ===")
    print("Sum:", sum(d))
    print("Max:", max(d))
    print("Min:", min(d))

    print("\n=== CONCAT & REPEAT ===")
    print(d + [6, 7])
    print(d * 2)

    print("\n=== COMPARISON ===")
    print([1, 2] == [1, 2])
    print([1, 2] < [1, 3])

    print("\n=== TYPE CONVERSION ===")
    print(tuple(d))
    print(set([1, 2, 2, 3]))
    print(str(d))

    print("\n=== NESTED LIST ===")
    m = [[1, 2], [3, 4]]
    print(m[0][1])

    print("\n=== STACK (LIFO) ===")
    stack = []
    stack.append(1)
    stack.append(2)
    print(stack.pop())
    print(stack)

    print("\n=== BUILT-IN FUNCTIONS ===")
    print(any([0, 1, 0]))
    print(all([1, 2, 3]))
    print(list(reversed(d)))
    print(sorted([3, 1, 2]))

    print("\n=== CLEAR LIST ===")
    d.clear()
    print(d)

    print("\n=== DONE ===")

if __name__ == "__main__":
    main()
