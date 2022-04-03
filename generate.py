import random

with open('random.txt', 'w') as f:
    for i in range(1000):
        f.write(str(random.randint(1, 100)) + '\n')
