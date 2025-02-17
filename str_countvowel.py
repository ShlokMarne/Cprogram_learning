charlist = ['<',',','`','~','!','@','#','$','%','^','&','*','(',')','_','-','=','+','[',']','}','{','|',':',';','"','<',',','>','.','?','/']
scount = 0
dcount = 0
ccount = 0
vcount = 0
s2 = input('Enter a string: ')
s2 = s2.lower()
for x in s2:
    if x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u':
        vcount = vcount+1
    elif x.isdigit():
        dcount = dcount+1
    elif x in charlist:
        scount = scount+1
    else:
        ccount = ccount+1

print('Found ' + str(vcount) + ' vowels')
print('Found ' + str(dcount) + ' digits')
print('Found ' + str(ccount) + ' consonents')
print('Found ' + str(scount) + ' symbols')