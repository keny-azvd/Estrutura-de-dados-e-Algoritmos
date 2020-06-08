#!/usr/bin/env python
# coding: utf-8

# In[49]:


import numpy as np
#algoritimo recursivo
def LCS(A,B):
    i = len(A)-1
    j = len(B)-1
    if i==0 or j ==0:
        return "";
    elif A[i]==B[j]:
        c = LCS(A[:-1],B[:-1])+A[i]
    elif A[i]!=B[j]:
        d1 =  LCS(A[:-1],B)
        d2 =  LCS(A,B[:-1])
        if len(d1)>len(d2):
            c = d1
        else:
            c = d2
    
    return c


# In[50]:


LCS("-dkenner","-kenner")
#ao colocar as strings de entrada, coloque "-string", pois o programa nao computa os dois primeiros caractres das entras


# In[78]:


def Monta(A,x,y):
    i = len(x)
    j = len(y)
    palavra = ""
    while i>0 or j>0:
        if x[i-1]==y[j-1]:
            palavra = palavra+x[i-1]
            i = i-1
            j = j-1
        else:
            if A[i,j-1]>A[i-1,j]:
                j = j-1
            else:
                i = i-1
    l = list(palavra)
    l.reverse()
    return ''.join(l)          
            
#Montagem da matriz bacana
def Longest_cs(x,y):
    t1 = len(x)
    t2 = len(y)
    A = np.zeros((t1+1,t2+1),dtype=int)
    for i in range(0,t1):
        for j in range(0,t2):
            if x[i]==y[j]:
                A[i+1,j+1]=1+A[i,j]
            else:
                if A[i+1,j]>A[i,j+1]:
                    A[i+1,j+1] = A[i+1,j]
                else:
                     A[i+1,j+1]=A[i,j+1]
    return Monta(A,x,y) 
    


# In[79]:


x ="ACGGA"
y ="ACTG"
Longest_cs(x,y)


# In[ ]:




