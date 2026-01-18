from abc import ABC,abstractmethod
class Animal(ABC):
    @abstractmethod
    def sound(self):
        pass
    def eat(self):
        print("eating")
class Dog(Animal):
    def sound(self):
        print("bark")
d=Dog()
d.sound()