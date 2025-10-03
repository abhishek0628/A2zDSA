class parent:
    def greet(self):
        print("hello form parent")
class child(parent):
    pass
obj=child()
obj.greet()

class animal:
    def __init__(self,species):
        self.species=species

    def make_sound():
        print("make sound")

class dog(animal):
    def __init__(self,name):
        super().__init__("dog")
        self.name=name

    def make_sound(self):
        print("woof,woof")

d=dog("tommy")
print(d.species)
print(d.name)
