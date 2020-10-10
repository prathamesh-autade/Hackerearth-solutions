def sort(s):

    k = 0

    swap = True

    while swap!=False:

        swap = False

        k+=1

        for i in range(len(s)-1):

            if s[i]>s[i+1]:

                s[i], s[i+1] = s[i+1], s[i]

                swap = True

    return k

n = int(input())

m = list(map(int, input().split()))

print(sort(m))
