# class test:
#     def __init__(self):
#         self.variable="hello"
#         self.Change(self.variable)
#     def Change(self,var):
#         var="namaste"

# obj=test()
# print(obj.variable)



# def moo(x):
#     x[0]=['name']
#     x[1]=['rate']
#     return id(x)
# q=['name','rate']
# print(id(q)==moo(q))



# def minSum(list1):
#     c=len(list1)
#     l=[]
#     for i in range(c):
#         s=list1[i]
#         ss=sum(s)
#         l.append(ss)
#     m=min(l)
#     return m
# list1=[[1,2,355],[2,4,5],[2,1,5,8]]
# k=minSum(list1)
# print("min sum is ",k)



# list=['a','b','c','d','e']
# list[1:3]=['x','y']
# print(list)




# A="anandkumarmaurya"
# c=0
# for i in A:
#     if i in "aeiou":
#         c=c+1
# print(c)




# x=3
# if 2>x:
#     print("first")
# else:
#     print("second")
#     if 2>x:
#         print ('third')
#     print ("fouth")
# print("fifth")





# class Name:
#     def __init__(self,firstname,mi,lastname):
#         self.firstname=firstname
#         self.mi=mi
#         self.lastname=lastname
# firstname="Geeta"
# name=Name(firstname,'f','smith')
# firstname='sita'
# name.lastname="mita"
# print(name.firstname,name.lastname)


# sum=0
# for i in range(0,18,3):
#     if i%6==0:
#         sum=sum+i
# print(sum)

# list=[2,1,2]
# print(list)




def func(empid,projid):
    dict={}
    for i in range(len(projid)):
        dict(i)=projid[i];
    dict.keys()
    r=list(zip(projid,empid))
    return r
empid=[1,2,3,4]
projid=['p1','p2','p1','p1']
result=func(empid,projid)
print(result)









# x=101
# if(x%2)==0: 
#     print("Even")


# name=['john','ben','walter','mike']
# r=[name for i in range(len(name)-1) if len(name[i])>len(name[i+1])]
# print(r)