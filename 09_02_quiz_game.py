import random
import mcq


print(''' 
   ____         _____ ______  _____          __  __  _____
  / __ \| |  | |_   _|___  / / ____|   /\   |  \/  |  ____|
 | |  | | |  | | | |    / / | |  __   /  \  | \  / | |__   
 | |  | | |  | | | |   / /  | | |_ | / /\ \ | |\/| |  __|  
 | |__| | |__| |_| |_ / /__ | |__| |/ ____ \| |  | | |____ 
  \___\_\\\____/|_____/_____| \_____/_/    \_|_|  |_|______|
                                                             ''')

print(" -------------------Welcome to quiz game-------------------")
print("------------------------Let's Begin------------------------")
print()

generated_numbers=[]
count=0
correct_answer=0

for i in range(1,25):
	flag=True
	a=0
	number = random.randint(0, 29)
	if number not in generated_numbers:
		generated_numbers.append(number)
		count+=1
		if count>10:
			break

		print(f"{count}. {mcq.questions[number]}")
		print("---------------------------------------------")
		for j in mcq.choices[number]:
			a+=1
			print(f"{a}. {j}")
		print("---------------------------------------------")
		print("Enter your choice:")
		print("---------------------")
		while flag:
			choice=int(input())
			print("---------------------")
			if choice-1==mcq.answers[number]:
				print("Correct")
				correct_answer+=1
				flag=False
				print("---------------------")
			elif choice<1 or choice>4:
				print("Invalid choice!!")
				print("---------------------")
				print("Enter again: ")
				print("---------------------")
			else:
				print("Incorrect..")
				print("---------------------")
				flag=False

if correct_answer>4:
	print("You won the game.. 🙂🙂🙂")
else:
	print("You lost the game.. 😭😭😭")
print(f"Your score is: {correct_answer}")
   