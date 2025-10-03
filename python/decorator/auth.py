def require_login(func):
    def wrapper(user):
        if user != "admin":
            print("Access Denied!")
        else:
            func(user)
    return wrapper

@require_login
def dashboard(user):
    print(f"Welcome {user}, here’s your dashboard!")

dashboard("guest")   # Access Denied!
dashboard("admin")   # Welcome admin, here’s your dashboard!
