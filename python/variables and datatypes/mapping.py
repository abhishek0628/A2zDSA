'''
A dictionary is an unordered collection of key-value pairs.

Keys must be unique and immutable (strings, numbers, tuples).

Values can be any data type (numbers, strings, lists, tuples, other dictionaries).

Dictionaries are mutable — you can change, add, or remove items.
'''
my_dict = {
    "key1": "value1",
    "key2": "value2"
}


empty={}
student={
    "name":"alex",
    "age":20,
    "branch":"cse"
}
print(student)
print(student["name"])
print(student.get("age"))
print(student.get("grade","not found")) #if key is not found return not found

#4. Modifying Dictionary
student["age"]=21 #modify age 
del student["branch"] #delete student with key branch
age =student.pop("age") #remove and get the value
print(student.get("age"))
print(student)

print(student.keys()) #get all keys
print(student.values()) #get all values
print(student.items()) #get all key-value pair

student = {"name": "Alice", "age": 20, "branch": "CSE"}

# Loop through keys
for key in student:
    print(key, student[key])

# Loop through keys explicitly
for key in student.keys():
    print(key)

# Loop through values
for value in student.values():
    print(value)

# Loop through key-value pairs
for key, value in student.items():
    print(key, ":", value)


#Nested Dictionary
students = {
    "s1": {"name": "Abhishek", "age": 20},
    "s2": {"name": "Rohit", "age": 21}
}

print(students["s1"]["name"])  # Abhishek

# Add nested entry
students["s3"] = {"name": "Priya", "age": 19}
print(students)
