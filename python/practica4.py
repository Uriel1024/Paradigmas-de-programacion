def parentesis(a):
    j = 0
    n = len(a)
    for i in range(n-1):
        if(a[i] == '(') and (a[i+1] == ')'):
            j = j + 1
            i = 1 + 1
    return j

a = input('Ingresa parentesis (): ')
n = parentesis(a)
print('El numero de parentesis () son: ', n)

