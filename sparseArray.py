def matchingStrings(strings, queries):
    res=[]
    for i in range(len(queries)):
        count=0
        for j in range(len(strings)):
            if queries[i]==strings[j]:
                count+=1
        res.append(count)
    return res
