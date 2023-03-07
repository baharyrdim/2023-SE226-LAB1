#Question3:
name = input("Enter the student's name: ")
lab = float(input("Enter the lab grade: "))
midterm = float(input("Enter the midterm grade: "))
final = float(input("Enter the final grade: "))
last_score = lab * 0.25 + midterm * 0.35 + final * 0.4
print("Name:", name)
print("Lab:", lab)
print("Midterm:", midterm)
print("Final:", final)
print("Last score:", last_score)

