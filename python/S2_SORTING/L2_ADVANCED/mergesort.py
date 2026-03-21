class Sorting:
    def merge(self, arr, l, m, r):
        n1 = m - l + 1
        n2 = r - m

        arr1 = []
        arr2 = []

        for i in range(n1):
            arr1.append(arr[l + i])

        for j in range(n2):
            arr2.append(arr[m + j + 1])

        i = 0
        j = 0
        k = l

        while i < n1 and j < n2:
            if arr1[i] < arr2[j]:
                arr[k] = arr1[i]
                i += 1
            else:
                arr[k] = arr2[j]
                j += 1
            k += 1

        while i < n1:
            arr[k] = arr1[i]
            i += 1
            k += 1

        while j < n2:
            arr[k] = arr2[j]
            j += 1
            k += 1

    def mergesort(self, arr, l, r):
        if l < r:
            m = l + (r - l) // 2
            self.mergesort(arr, l, m)
            self.mergesort(arr, m + 1, r)
            self.merge(arr, l, m, r)


if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))

    s = Sorting()
    s.mergesort(arr, 0, n - 1)

    for i in range(n):
        print(arr[i], end=" ")