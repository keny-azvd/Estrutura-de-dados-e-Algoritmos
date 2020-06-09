#!/usr/bin/env python
# coding: utf-8

# In[74]:


import numpy as np
def unbounded_knapsack(capacity,weights,values):
    W = capacity +1
    n = len(weights)
    k = np.zeros(W)
    for x in range(0,W):
        k[x] = 0
        for i in range(0,n-1):
            w = weights[i]
            v = values[i]
            if w <= x:
                if k[x] >= k[x-w]+v:
                    k[x] = k[x]
                else:
                    k[x] = k[x-w]+v
    return k
    


# In[75]:


#temos que considerar o caso que temos zero de capacidade
weight = np.array([6,2,4,3,11])
print(weight[4])
values = np.array([20,8,14,13,35])
unbounded_knapsack(10,weight,values)


# In[ ]:





# In[ ]:




