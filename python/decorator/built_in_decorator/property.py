class circle:
    def __init__(self,radius):
        self.radius=radius
    @property
    def area(self):
        return 3.14 * self.radius ** 2
    
c=circle(5)
print(c.area)

# class Circle:
#     def __init__(self, radius):
#         self._radius = radius

#     @property
#     def area(self):
#         return 3.14 * self._radius ** 2

# c = Circle(5)
# print(c.area)   # 78.5  (used like attribute, not method)
