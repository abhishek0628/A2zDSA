class person:
    species="homo sapians"
    def __init__(self,name):
        self.name=name
    @classmethod
    def create_anonymous(cls):
        return cls("anonymous") # calls Person("Anonymous")
p=person.create_anonymous()
print(p.name)
print(p.species)