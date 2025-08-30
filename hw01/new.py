def hailstone(n):
    """Print the hailstone sequence starting at n and return its
    length.

    >>> a = hailstone(10)
    10
    5
    16
    8
    4
    2
    1
    >>> a
    7
    >>> b = hailstone(1)
    1
    >>> b
    1
    """
    "*** YOUR CODE HERE ***"
    sequence = [n]
    while n != 1:
        if (n % 2 == 1):
            n = 3 * n + 1
            sequence.append(n)
        else:
            n //= 2
            sequence.append(n)
    
    for i in range(0, len(sequence)):
        print(sequence[i])
    return len(sequence)