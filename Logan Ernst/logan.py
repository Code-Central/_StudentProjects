import random
num1=random.randint(1, 3)
num2=random.randint(1, 3)
num3=random.randint(1, 3)
while num1 == num2 or num1 == num3 or num2 == num3:
  num1=random.randint(1, 3)
  num2=random.randint(1, 3)
  num3=random.randint(1, 3)
print(num1)
print(num2)
print(num3)