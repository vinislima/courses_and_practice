
type_tea = input()
type_tea = int(type_tea)
tea_one, tea_two, tea_three, tea_four, tea_five = input().split(" ")
tea_one = int(tea_one)
tea_two = int(tea_two)
tea_three = int(tea_three)
tea_four = int(tea_four)
tea_five = int(tea_five)

teas = [tea_one, tea_two, tea_three, tea_four, tea_five]

count = 0
count_number = 0
while count <= 4:
	if teas[count] == type_tea:
		count_number += 1
	count += 1
print(f"{count_number}")