import queue
BRANCO = 0
CINZA = 1
PRETO = 2
class Graph:
    def __init__(self,n):
        self.n= n
        self.M = [[0 for a in range(n)]for p in range(n)]
        self.L = [[]for s in range(n) ]

        self.pai = [ None for r in range(n)]
        self.d =[ -1 for o in range(n)]

    def bfs(self,source):
        cor = [BRANCO for p in range(self.n)]
        cor[source] = CINZA
        self.d[source] = 0
        q = queue.Queue()
        Q.put(source)

        while (Q.empty() == False):
            u = Q.get()
            for v in self.L[u]:
                if cor[v] == BRANCO:
                    cor[v]== CINZA
                    self.d[v] = self.d[u]+1
                    self.pai[v]=u
                    Q.put(u)
            cor[u]= PRETO
        print(self.d)
        print(self.pai)


