# tuple_operations.py
# Tuple: immutable, ordered, calm under pressure

def main():
    print("=== TUPLE CREATION ===")
    a = ()
    b = (1, 2, 3)
    c = tuple([4, 5, 6])
    d = 7, 8, 9          # packing
    e = (10,)            # single-element tuple (comma matters)
    print(a, b, c, d, e)

    print("\n=== ACCESSING ELEMENTS ===")
    print(b[0])
    print(b[-1])
    print(b[1:3])
    print(b[::-1])

    print("\n=== IMMUTABILITY CHECK ===")
    try:
        b[0] = 100
    except TypeError as err:
        print("Error:", err)

    print("\n=== ITERATION ===")
    for x in b:
        print(x, end=" ")
    print()

    print("\n=== ENUMERATE ===")
    for i, x in enumerate(b):
        print(i, x)

    print("\n=== UNPACKING ===")
    x, y, z = b
    print(x, y, z)

    print("\n=== NESTED TUPLES ===")
    t = ((1, 2), (3, 4))
    print(t[1][0])

    print("\n=== CONCATENATION & REPEAT ===")
    print(b + (4, 5))
    print(b * 3)

    print("\n=== MEMBERSHIP ===")
    print(2 in b)
    print(99 not in b)

    print("\n=== SEARCHING ===")
    print("Index of 2:", b.index(2))
    print("Count of 2:", b.count(2))

    print("\n=== COMPARISON ===")
    print((1, 2) == (1, 2))
    print((1, 2) < (1, 3))

    print("\n=== BUILT-IN FUNCTIONS ===")
    print("Length:", len(b))
    print("Max:", max(b))
    print("Min:", min(b))
    print("Sum:", sum(b))
    print("Any:", any((0, 0, 1)))
    print("All:", all((1, 2, 3)))

    print("\n=== TYPE CONVERSION ===")
    lst = list(b)
    st = set(b)
    s = str(b)
    print(lst, st, s)

    print("\n=== TUPLE AS DICT KEY ===")
    mp = {(1, 2): "point A", (3, 4): "point B"}
    print(mp[(1, 2)])

    print("\n=== RETURN MULTIPLE VALUES ===")
    def stats(nums):
        return min(nums), max(nums), sum(nums)

    mn, mx, sm = stats(b)
    print(mn, mx, sm)

    print("\n=== DONE ===")

if __name__ == "__main__":
    main()
