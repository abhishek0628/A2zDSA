from dataclasses import dataclass

@dataclass
class Student:
    name: str
    age: int
    branch: str

s = Student("Abhishek", 20, "CSE")
print(s)  # Student(name='Alice', age=20, branch='CSE')
