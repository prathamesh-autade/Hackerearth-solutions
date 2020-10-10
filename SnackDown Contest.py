for _ in range(int(input())):

    total = set([i for i in range(1, int(input()) + 1)])

    arr = list(map(int, input().split()))

    arr.pop(0)

    p = set([i for i in arr])

    arr = []

 

    arr = list(map(int, input().split()))

    arr.pop(0)

    q = set([i for i in arr])

    p = p.union(q)

    if len(total - p):

        print('NO')

    else:

        print('YES')
