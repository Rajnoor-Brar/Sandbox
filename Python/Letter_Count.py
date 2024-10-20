import random

# Step 1: Set the seed
random.seed(1)

# Step 2: Generate 1000 random values between 0 and 1
R = 1000
x = [random.random() for _ in range(R)]

n_neighbors=5
# Step 3: Define a function to compute the moving window average
def moving_average(values, n_neighbors):
    n = len(values)
    avg = []
    for i in range(n):
        start = max(0, i - n_neighbors)
        end = min(n, i + n_neighbors + 1)
        window = values[start:end]
        avg.append(sum(window) / len(window))
    return avg

# Step 4: Compute the moving window averages for n_neighbors from 1 to 9
Y = [x]  # Start with the original list
Y.append(moving_average(x, n_neighbors))

# Verify the result by printing the first few elements of each list in Y
for i, y in enumerate(Y):
    print(f"Y[{i}][:5] = {y[:5]}")
