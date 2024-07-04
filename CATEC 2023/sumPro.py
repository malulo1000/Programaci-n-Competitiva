#Codex
import numpy as np

n, m = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(n)]
s = np.sum(a, axis=0)
print(np.prod(s))
