class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        adj = [ [] for i in range(numCourses) ]
        inDegree = [0 for i in range(numCourses) ]

        for term in prerequisites:
            adj[term[1]].append(term[0])
            inDegree[term[0]] += 1

        q = []
        for i in range(numCourses):
            if inDegree[i] == 0:
                q.append(i)

        
        visit = 0
        while q:
            node = q.pop()
            visit += 1

            for nbr in adj[node]:
                inDegree[nbr] -= 1
                if inDegree[nbr] == 0:
                    q.append(nbr)

        if numCourses == visit:
            return True
        return False

        