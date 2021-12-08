def plus(a,b):
    if type(b) is str:
        print("error")
        return None
    else:
        return a+b
    
re = plus(3, "12")
print(re)