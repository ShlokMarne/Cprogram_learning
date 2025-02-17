mylist = []
length = int(input("Enter number of elements: "))
for i in range (0,length):
    value = int(input())
    mylist.append(value)

copylist = mylist.copy()

print("Entered list ", mylist)
print("Cloned list ", copylist)