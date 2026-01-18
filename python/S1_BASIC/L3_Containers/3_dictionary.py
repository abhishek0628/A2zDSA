# map_operations.py
# Python dict = STL map / unordered_map
# One file. All major operations.

def main():
    print("=== MAP CREATION ===")
    mp = {}
    mp2 = {"a": 1, "b": 2}
    mp3 = dict(c=3, d=4)
    mp4 = dict([("x", 10), ("y", 20)])
    print(mp, mp2, mp3, mp4)

    print("\n=== INSERT / UPDATE ===")
    mp["name"] = "Abhishek"
    mp["age"] = 21
    mp["age"] = 22   # update
    print(mp)

    print("\n=== ACCESS ===")
    print(mp["name"])
    print(mp.get("age"))
    print(mp.get("branch", "CSE"))  # safe access

    print("\n=== MEMBERSHIP TEST ===")
    print("name" in mp)
    print("salary" not in mp)

    print("\n=== DELETE ===")
    del mp["age"]
    removed = mp.pop("name")
    print("Removed:", removed)
    print(mp)

    print("\n=== POPITEM (LAST INSERTED) ===")
    mp2.popitem()
    print(mp2)

    print("\n=== ITERATION ===")
    mp = {"a": 1, "b": 2, "c": 3}

    print("Keys:")
    for k in mp:
        print(k)

    print("Values:")
    for v in mp.values():
        print(v)

    print("Key-Value:")
    for k, v in mp.items():
        print(k, v)

    print("\n=== LENGTH ===")
    print(len(mp))

    print("\n=== COPY ===")
    mp_copy = mp.copy()
    print(mp_copy)

    print("\n=== CLEAR ===")
    temp = {"x": 1}
    temp.clear()
    print(temp)

    print("\n=== MERGE MAPS ===")
    a = {"x": 1, "y": 2}
    b = {"y": 99, "z": 3}
    a.update(b)
    print(a)

    print("\n=== DEFAULT VALUES ===")
    val = mp.setdefault("d", 4)
    print(val)
    print(mp)

    print("\n=== FROMKEYS ===")
    keys = ["p", "q", "r"]
    mp_new = dict.fromkeys(keys, 0)
    print(mp_new)

    print("\n=== SORTING MAP ===")
    mp = {"c": 3, "a": 1, "b": 2}

    print("Sorted by key:")
    for k in sorted(mp):
        print(k, mp[k])

    print("Sorted by value:")
    for k, v in sorted(mp.items(), key=lambda x: x[1]):
        print(k, v)

    print("\n=== NESTED MAP ===")
    student = {
        "name": "Abhishek",
        "marks": {"maths": 90, "cs": 95}
    }
    print(student["marks"]["cs"])

    print("\n=== BUILT-IN FUNCTIONS ===")
    print("Keys:", list(mp.keys()))
    print("Values:", list(mp.values()))
    print("Items:", list(mp.items()))

    print("\n=== DONE ===")

if __name__ == "__main__":
    main()
