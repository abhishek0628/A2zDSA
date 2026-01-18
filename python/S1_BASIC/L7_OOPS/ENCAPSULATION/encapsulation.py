class Student:
    def __init__(self):
        self.__marks__=0
    def setmarks(self,m):
        if(m>=0):
            self.__marks=m
    def getmarks(self):
        return self.__marks
s=Student()
s.setage(20)
print(s.getage())
