while True:
    try: 
        p,n=map(int,input().split())
        if p==(n*p):
            print('Accepted')
        else:
            print('Wrong Answer')
    except:
        break
