from grafo import Graph


def load(filenName):
    f = open (filenName,'r')
    n = int(f.readline())

    g= Graph(n)
    l =0
    for line in f():
        line.strip()
        numeros = lline.split("\t")
        c =0
        for i in numeros:
            g.M[l][c]= int (i)
            if( g.M[l][c]> 0):
                g.L[l].append(c)
            c += 1
        ç += 1
    print(g.M)



