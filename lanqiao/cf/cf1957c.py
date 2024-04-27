"""
=============================
ᕕ(◠ڼ◠)ᕗ
@time:2024/4/24 10:55
@IDE:PyCharm
=============================
"""
MOD = 10 ** 9 + 7
def factorial_mod(n):
    """ Computes factorial of n modulo MOD. """
    if n == 0:
        return 1
    result = 1
    for i in range(2, n + 1):
        result = (result * i) % MOD
    return result


def solve_chess_placement(test_cases):
    results = []
    for n, k, moves in test_cases:
        # Tracks which rows and columns are occupied
        occupied_rows = [False] * n
        occupied_cols = [False] * n

        # Apply given moves and mirrored moves
        for r, c in moves:
            occupied_rows[r] = True
            occupied_cols[c] = True
            # Mirror move, check if within bounds and not same spot
            if r != c:  # Mirror move is only valid if r != c
                occupied_rows[c] = True
                occupied_cols[r] = True

        # Count unoccupied rows and columns
        unoccupied_rows = sum(1 for i in occupied_rows if not i)
        unoccupied_cols = sum(1 for i in occupied_cols if not i)

        # Number of ways to place the remaining cars in the unoccupied positions
        if unoccupied_rows == unoccupied_cols:
            result = factorial_mod(unoccupied_rows)  # We can place one car per row/column pair
        else:
            result = 0  # Invalid state, should not happen due to problem constraints

        results.append(result)
    return results


# Example case to verify logic
test_cases = [
    (4, 1, [(0, 1)]),  # Simple 4x4 board with one move made
    (3, 2, [(0, 0), (2, 2)])  # All moves on diagonal, 3x3 board
]

solve_chess_placement(test_cases)
