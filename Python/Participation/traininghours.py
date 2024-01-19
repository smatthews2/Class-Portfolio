trainingDays = trainingHours = 0
while(trainingDays < 50 and trainingHours < 100):
    inputDays = int(input('Enter your training days.\n'))
    inputHours = int(input('Now, enter your training hours.\n'))
    trainingDays += inputDays
    trainingHours += inputHours
    print('Days:', trainingDays,'\nHours:', trainingHours)