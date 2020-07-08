# Author : Ashutosh Mishra


import itertools

def getPathCost( bunnies, distanceMatrix ):
  cost = 0
  for i in range(0, len(bunnies) - 1):
      _from = bunnies[i]
      _to = bunnies[i + 1]
      cost += distanceMatrix[_from][_to]
  startNode = 0
  endNode = len(distanceMatrix) - 1
  cost += distanceMatrix[startNode][bunnies[0]]
  cost += distanceMatrix[bunnies[-1]][endNode]
  return cost

def completeBellmanFord(edges):
  distanceMatrix = []
  for vertex in range( len(edges) ):
    distances = bellmanFord(edges, vertex)
    distanceMatrix.append(distances)
  return distanceMatrix

def bellmanFord(edges, start):
  distances = [ float('inf') for vertex in edges ]
  distances[start] = edges[start][start]
  for i in range(len(edges)):
    for u, v, weight in enumerateEdges(edges):
      if distances[u] + weight < distances[v]:
        distances[v] = distances[u] + weight
  return distances
    
def enumerateEdges(edges):
  for u, row in enumerate(edges):
    for v, weight in enumerate(row):
      yield (u, v, weight)

def hasNegativeCycle(bellmanFordMatrix):
  distances = bellmanFordMatrix[0]
  for u, v, weight in enumerateEdges(bellmanFordMatrix):
    if distances[u] + weight < distances[v]:
      return True
  return False


def solution(times, time_limit):
  numBunnies = len(times) - 2
  bunnyIndices = [bunny + 1 for bunny in range(numBunnies)]

  distanceMatrix = completeBellmanFord(times)
  if hasNegativeCycle(distanceMatrix):
    return range(numBunnies)

  for width in range(numBunnies, 0, -1):
    for perm in itertools.permutations(bunnyIndices, width):
      cost = getPathCost(perm, distanceMatrix)
      if cost <= time_limit:
        return [bunny - 1 for bunny in sorted(perm)]
  
  return []


def test(times, budget, expected):
    ans = solution(times, budget)
    print(expected, ans, ans == expected)


cases = [
    ([[0, 1, 1, 1, 1], [1, 0, 1, 1, 1], [1, 1, 0, 1, 1], [1, 1, 1, 0, 1], [1, 1, 1, 1, 0]],
    3, [0, 1]),
    ([[0, 2, 2, 2, -1], [9, 0, 2, 2, -1], [9, 3, 0, 2, -1], [9, 3, 2, 0, -1], [9, 3, 2, 2, 0]],
    1, [1, 2])
]

def main():
  for times, budget, expected in cases:
    test(times, budget, expected)

main()
