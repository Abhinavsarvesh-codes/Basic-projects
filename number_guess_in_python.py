import random
num =random.randint(1,100)
guess=0
attempts=0
print("********** Welcome to the number guessing game *********")
print("Guess a number between 1 and 100")
while guess!=num:
    guess=int(input("Enter the number :"))
    attempts+=1
    if num<guess:
        print("Too high")
    elif num>guess:
        print("Too low")
print(f"Congratulations! It's : {num} You guessed it in {attempts} attempts")
     