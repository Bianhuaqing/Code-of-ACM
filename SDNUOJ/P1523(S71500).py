t=input()
t=int(t)
for x in range(1,t+1):
        a,b=map(int ,input().split())
        print(pow(a,b,1000000007))
