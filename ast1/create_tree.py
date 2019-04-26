import pydot
import os
from IPython.display import Image, display
G = pydot.Dot(graph_type="digraph")
import matplotlib.pyplot as plt
import matplotlib.image as mpimg

d={}
w={}
with open("sample.txt") as f:
    c=f.readline()
    while(c):
        a=c.split(' ')
        w[a[0]]=str(a[0])+"   "+a[1]
        if(a[2]=='-1' or a[2]=='-1\n'):
            a[2]=int(a[2])
        if(a[3]=='-1' or a[3]=='-1\n'):
            a[3]=int(a[3])
        if(a[4]=='-1' or a[4]=='-1\n'):
            a[4]=int(a[4])
        d[str(a[0])+"   "+a[1]]=[a[1],a[2],a[3],a[4]]
        #print( d[str(a[0])+"   "+a[1]])
        c=f.readline()
# d={   1:["if",2,3,4],
#            2:["cond",-1,-1,-1],
#            3:["body",-1,-1,-1],
#            4:["seq",5,6,7],
#                5:["s",-1,-1,-1],
#                6:["s6",-1,-1,-1],
#                7:["s7",-1,-1,-1]}
#print(w)
#print(" ")
#print(d)
for k,v in d.items():
    try:
        v[1]=w[v[1]]
    except:
        continue
    try:
        v[2]=w[v[2]]
    except:
        continue
    try:
        v[3]=w[v[3]]
    except:
        continue
        
G = pydot.Dot(graph_type="digraph")
for k,v in d.items():
    node = pydot.Node(k, style="filled", fillcolor="yellow")
    if(k!=-1):
        #node.set(str(k), v[0])
        #print(node.get_attributes())
        G.add_node(node)
    if(v[1]!=-1):
        edge = pydot.Edge(k,v[1])
        G.add_edge(edge)
    if(v[2]!=-1):
        edge = pydot.Edge(k,v[2])
        G.add_edge(edge)
    if(v[3]!=-1):
        edge = pydot.Edge(k,v[3])
        G.add_edge(edge)
im = Image(G.create_png())
G.write_png('ast.png')


img=mpimg.imread('ast.png')
imgplot = plt.imshow(img)
plt.show()
