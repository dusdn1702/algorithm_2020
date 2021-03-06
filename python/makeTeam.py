#0번부터N번 번호 부여
#팀합치기 연산은 두 팀을 합치는 연산
#같은팀여부확인 연산은 두 학생이 같은 팀에 속하는지 확인하는 연산
#N번호, M개의 연산 입력
#팀합치기는 0 a b
#같은팀여부확인은 1 a b
#같은팀이면 yes 아니먄 no

N, M = map(int, input().split())
graph = [0]*(N+1)
def init():
    for i in range(0, N+1):
        graph[i] = i

def find_parent(graph, x):
    if graph[x] != x:
        graph[x] = find_parent(graph, graph[x])
    print(graph[x])
    return graph[x]

def union_parent(graph, a, b):
    a = find_parent(graph, a)
    b = find_parent(graph, b)
    if a < b:
        graph[b] = a
    else:
        graph[a] = b

def sameTeam(a, b):
    if find_parent(graph, a) == find_parent(graph, b):
        return True
    else:
         return False
    
init()
for _ in range(M):
    g, a, b = map(int, input().split())
    if g == 0:
        union_parent(graph, a, b)
    else:
        if sameTeam(a, b):
            print("yes")
        else:
            print("no")
