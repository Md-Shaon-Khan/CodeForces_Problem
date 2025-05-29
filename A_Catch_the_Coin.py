def can_catch_coin(n, coins):
    results = []
    for x, y in coins:
        steps_to_reach = max(abs(x), abs(y))
        if y - steps_to_reach >= 0:
            results.append("YES")
        else:
            results.append("NO")
    return results

# Read input
n = int(input().strip())
coins = [tuple(map(int, input().strip().split())) for _ in range(n)]

# Get the results
results = can_catch_coin(n, coins)

# Print the results
for result in results:
    print(result)
