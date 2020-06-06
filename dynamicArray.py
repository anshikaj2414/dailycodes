def dynamicArray(n, queries):
    # Write your code here
    lastNumber = 0
    seqList=[];
    for i in range(n):
        seqList.append([])
    res = [];
    for k, x, y in queries:
        index = (x^lastNumber)%n
        if k==1:
            seqList[index].append(y)
            
        else:
            size = len(seqList[index])
            lastNumber = seqList[index][y%size]
            res.append(lastNumber)
            
    return res 
