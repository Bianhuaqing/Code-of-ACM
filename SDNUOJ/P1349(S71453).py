while True:
    try:
        a,b,c=map(int ,input().split())
        print(pow(a,b,c))
    except:
        break
