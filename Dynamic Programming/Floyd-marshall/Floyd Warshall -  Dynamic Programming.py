#!/usr/bin/env python
# coding: utf-8

# In[63]:


import numpy as np
def Floyd_warshall(A): #matriz ja vai estar inicializada
    n = len(A)
    for k in range(0,n):
        for i in range(0,n):
            for j in range(0,n):
                if A[i,j] < A[i,k]+A[k,j]:
                    A[i,j] = A[i,j]
                else:
                    A[i,j] = A[i,k]+A[k,j]
    return A


# In[64]:


A =np.array([[0,8,5],[3 ,0, 1000],[1000,2,0]])
print(A)
Floyd_warshall(A)


# In[ ]:





# In[ ]:




