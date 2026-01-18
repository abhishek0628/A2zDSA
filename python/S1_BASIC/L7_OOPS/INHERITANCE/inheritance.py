class Animal:
    def sound(self):
        print("makes sound")

class Dog(Animal):
    def makesound(self):
        print("bark")
d=Dog()
d.sound()
d.makesound()

